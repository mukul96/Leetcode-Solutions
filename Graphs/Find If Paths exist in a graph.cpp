class Solution
{
public:
    void dfs(unordered_map<int, vector<int> > &mp, vector<int> &visited, int source, int destination, bool &flag)
    {
        visited[source] = true;
        if (source == destination)
        {
            flag = true;
            return;
        }
        for (int i = 0; i < mp[source].size(); i++)
        {
            if (!visited[mp[source][i]])
            {
                dfs(mp, visited, mp[source][i], destination, flag);
            }
        }
    }
    bool validPath(int n, vector<vector<int> > &nums, int source, int destination)
    {
        unordered_map<int, vector<int> > mp;
        vector<int> visited(n, 0);
        bool flag = false;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i][0]].push_back(nums[i][1]);
            mp[nums[i][1]].push_back(nums[i][0]);
        }
        dfs(mp, visited, source, destination, flag);
        return flag;
    }
};