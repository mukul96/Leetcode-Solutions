class Solution
{
public:
    void dfs(vector<vector<int> > &nums, int source, vector<int> temp, vector<vector<int> > &res)
    {
        temp.push_back(source);
        if (source == nums.size() - 1)
        {
            res.push_back(temp);
        }
        for (int i = 0; i < nums[source].size(); i++)
        {
            //if(!visited[nums[source][i]]){
            dfs(nums, nums[source][i], temp, res);
            //}
        }
    }
    vector<vector<int> > allPathsSourceTarget(vector<vector<int> > &nums)
    {
        int n = nums.size();
        vector<vector<int> > res;
        vector<int> temp;

        dfs(nums, 0, temp, res);

        return res;
    }
};