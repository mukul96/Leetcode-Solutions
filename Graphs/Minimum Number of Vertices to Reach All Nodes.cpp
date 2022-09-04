class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int> > &edges)
    {
        vector<int> nums(n, 0);
        for (int i = 0; i < edges.size(); i++)
        {
            nums[edges[i][1]] += 1;
        }
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (!nums[i])
            {
                res.push_back(i);
            }
        }
        return res;
    }
};