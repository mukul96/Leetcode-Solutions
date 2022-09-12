class Solution
{
public:
    int maximalNetworkRank(int n, vector<vector<int> > &road)
    {
        unordered_map<int, int> mp;
        map<pair<int, int>, int> mpp;
        int res = 0;
        for (int i = 0; i < road.size(); i++)
        {
            mp[road[i][0]] += 1;
            mp[road[i][1]] += 1;
            pair<int, int> pr;
            if (road[i][0] > road[i][1])
            {
                pr = make_pair(road[i][1], road[i][0]);
            }
            else
            {
                pr = make_pair(road[i][0], road[i][1]);
            }
            mpp[pr] = 1;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                auto pr = make_pair(i, j);
                int temp = mp[i] + mp[j];
                if (mpp[pr])
                {
                    temp -= 1;
                }
                res = max(temp, res);
            }
        }

        return res;
    }
};