class Solution
{
public:
    int minFallingPathSum(vector<vector<int>> &arr)
    {
        vector<vector<int>> dp = arr;
        for (int i = 1; i < arr.size(); ++i)
            for (int j = 0; j < arr[0].size(); ++j)
            {
                dp[i][j] = INT_MAX;
                for (int k = 0; k < arr[0].size(); ++k)
                {
                    if (j == k)
                        continue;
                    dp[i][j] = min(dp[i - 1][k] + arr[i][j], dp[i][j]);
                }
            }

        int result = INT_MAX;
        for (int i = 0; i < arr[0].size(); ++i)
            result = min(dp[dp.size() - 1][i], result);
        return result;
    }
};