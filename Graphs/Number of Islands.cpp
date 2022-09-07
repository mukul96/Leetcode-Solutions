class Solution
{
public:
    void dfs(vector<vector<char> > &nums, vector<vector<int> > &visited, int i, int j)
    {
        visited[i][j] = 1;
        if (i + 1 < nums.size() && nums[i + 1][j] == '1' && !visited[i + 1][j])
        {
            dfs(nums, visited, i + 1, j);
        }
        if (i - 1 >= 0 && nums[i - 1][j] == '1' && !visited[i - 1][j])
        {
            dfs(nums, visited, i - 1, j);
        }
        if (j + 1 < nums[i].size() && nums[i][j + 1] == '1' && !visited[i][j + 1])
        {
            dfs(nums, visited, i, j + 1);
        }
        if (j - 1 >= 0 && nums[i][j - 1] == '1' && !visited[i][j - 1])
        {
            dfs(nums, visited, i, j - 1);
        }
    }
    int numIslands(vector<vector<char> > &nums)
    {
        vector<vector<int> > visited(nums.size(), vector<int>(nums[0].size(), 0));
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < nums[i].size(); j++)
            {
                if (nums[i][j] == '1' && !visited[i][j])
                {
                    res++;
                    dfs(nums, visited, i, j);
                }
            }
        }

        return res;
    }
};