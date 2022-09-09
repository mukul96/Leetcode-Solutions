class Solution
{
public:
    void dfs(unordered_map<int, vector<int> > &mp, vector<int> &visited, unordered_map<int, int> &restr, int i, int &res)
    {
        visited[i] = 1;
        res++;
        for (int j = 0; j < mp[i].size(); j++)
        {
            if (!visited[mp[i][j]] && !restr[mp[i][j]])
            {
                dfs(mp, visited, restr, mp[i][j], res);
            }
        }
    }
    int reachableNodes(int n, vector<vector<int> > &nums, vector<int> &restricted)
    {
        unordered_map<int, int> restr;
        unordered_map<int, vector<int> > mp;
        vector<int> visited(n, 0);
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i][0]].push_back(nums[i][1]);
            mp[nums[i][1]].push_back(nums[i][0]);
        }

        for (int i = 0; i < restricted.size(); i++)
        {
            restr[restricted[i]] = 1;
        }

        if (!visited[0] && !restr[0])
        {
            dfs(mp, visited, restr, 0, res);
        }

        return res;
    }
};