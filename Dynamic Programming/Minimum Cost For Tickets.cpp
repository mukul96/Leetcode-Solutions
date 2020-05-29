class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
         vector<int> dp(366, INT_MAX);
    dp[0] = 0; // You haven't traveled yet, so you haven't spent anything!
    size_t j = 0;
    for (size_t i = 1; i < dp.size(); i++) {
		// Is this one of my travel days?
        if (j >= days.size() || i != days[j]) { dp[i] = dp[i - 1]; continue; }
		// Yes! Perform comparisons.
        dp[i] = min(dp[i], (i >= 1 ? dp[i - 1] : 0) + costs[0]);
        dp[i] = min(dp[i], (i >= 7 ? dp[i - 7] : 0) + costs[1]);
        dp[i] = min(dp[i], (i >= 30 ? dp[i - 30] : 0) + costs[2]);
        j++; // Don't forget to move on to the next travel day!
        cout<<i<<" "<<dp[i]<<" ";
    }

    return dp.back(); 
    }
};