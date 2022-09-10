class Solution
{
public:
    long long maximumImportance(int n, vector<vector<int> > &roads)
    {
        vector<long long> nums(n, 0);
        long long res = 0;
        for (long long i = 0; i < roads.size(); i++)
        {
            nums[roads[i][0]] += 1;
            nums[roads[i][1]] += 1;
        }
        sort(nums.begin(), nums.end());
        for (long long i = n - 1; i >= 0; i--)
        {
            res = res + (i + 1) * nums[i];
        }
        return res;
    }
};