class Solution
{
public:
    bool canFinish(int n, vector<vector<int> > &pre)
    {
        unordered_map<int, vector<int> > nums;
        vector<int> indegree(n, 0);
        queue<int> q;
        int count = 0;
        for (int i = 0; i < pre.size(); i++)
        {
            nums[pre[i][1]].push_back(pre[i][0]);
            indegree[pre[i][0]] += 1;
        }
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                cout << "indegree i " << i << endl;
                count++;
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int temp = q.front();
            q.pop();
            for (int i = 0; i < nums[temp].size(); i++)
            {
                indegree[nums[temp][i]] -= 1;
                if (indegree[nums[temp][i]] == 0)
                {
                    q.push(nums[temp][i]);
                    count++;
                }
            }
        }
        if (count != n)
        {
            return false;
        }
        return true;
    }
};