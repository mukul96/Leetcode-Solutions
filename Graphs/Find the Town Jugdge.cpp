class Solution
{
public:
    int findJudge(int n, vector<vector<int> > &nums)
    {
        unordered_map<int, vector<int> > mp, mpr;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i][0]].push_back(nums[i][1]);
            mpr[nums[i][1]].push_back(nums[i][0]);
        }
        // size of vector of town judge vertex to be 0;
        // town judge is present in everyone's mapping in a reversal way
        // reversal way  then vecto size of the town judge is n-1
        for (int i = 1; i <= n; i++)
        {
            if (mp[i].size() == 0 && mpr[i].size() == n - 1)
            {
                return i;
            }
        }
        return -1;
    }
};