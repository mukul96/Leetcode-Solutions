class Solution
{
public:
    int pathSum(vector<vector<int>> &nums, int i, int j)
    {
        if (i < 0 || j < 0)
        {
            return (INT_MAX);
        }
        else if (i == 0 && j == 0)
        {
            return (nums[i][j]);
        }
        else
        {
            return (nums[i][j] + min(pathSum(nums, i - 1, j), pathSum(nums, i, j - 1)));
        }
    }
    int minPathSum(vector<vector<int>> &nums)
    {

        int m = nums.size(), n = nums[0].size();
        //int res=pathSum(nums,i,j);
        vector<vector<int>> dp(nums.size(), vector<int>(nums[0].size(), 0));
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                //cout<<dp[i][j]<<" "<<i<<" "<<j<<" ";
                if (i == 0 && j == 0)
                {
                    dp[i][j] = nums[i][j];
                }
                else
                {
                    if (i - 1 < 0)
                    {
                        dp[i][j] = nums[i][j] + dp[i][j - 1];
                    }
                    else if (j - 1 < 0)
                    {
                        dp[i][j] = nums[i][j] + dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = nums[i][j] + min(dp[i - 1][j], dp[i][j - 1]);
                    }
                }
            }
        }
        return (dp[m - 1][n - 1]);
    }
};