class Solution
{
public:
    vector<vector<string> > displayTable(vector<vector<string> > &orders)
    {
        map<string, int> foodItems;
        map<int, int> tableNumber;
        map<pair<string, string>, int> mp;
        vector<vector<string> > res;
        for (int i = 0; i < orders.size(); i++)
        {
            foodItems[orders[i][2]] = 1;
            tableNumber[stoi(orders[i][1])] = 1;
            auto pairVal = make_pair(orders[i][1], orders[i][2]);
            mp[pairVal] += 1;
        }

        vector<string> temp;
        temp.push_back("Table");
        for (auto it = foodItems.begin(); it != foodItems.end(); ++it)
        {
            temp.push_back(it->first);
        }
        res.push_back(temp);
        for (auto it = tableNumber.begin(); it != tableNumber.end(); ++it)
        {
            vector<string> temp;
            string tableNum = to_string(it->first);
            temp.push_back(tableNum);
            for (int i = 1; i < res[0].size(); i++)
            {
                auto pairVal = make_pair(tableNum, res[0][i]);
                temp.push_back(to_string(mp[pairVal]));
            }
            res.push_back(temp);
        }
        return res;
    }
};