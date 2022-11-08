class Solution
{
public:
    vector<vector<int> > mergeSimilarItems(vector<vector<int> > &items1, vector<vector<int> > &items2)
    {
        map<int, int> mp;
        for (int i = 0; i < items1.size(); i++)
        {
            mp[items1[i][0]] += items1[i][1];
        }
        for (int i = 0; i < items2.size(); i++)
        {
            mp[items2[i][0]] += items2[i][1];
        }

        vector<vector<int> > res;
        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            vector<int> temp;
            temp.push_back(it->first);
            temp.push_back(it->second);
            res.push_back(temp);
        }
        return res;
    }
};