class Solution
{
public:
    int findCenter(vector<vector<int> > &nums)
    {
        unordered_map<int, int> mp;
        int maxEdge = 0;
        return nums[0][0] == nums[1][1] || nums[0][0] == nums[1][0] ? nums[0][0] : nums[0][1] == nums[1][1] || nums[0][1] == nums[1][0] ? nums[0][1]
                                                                                                                                        : 0;

        for (int i = 0; i < nums.size(); i++)
        {
            maxEdge = max(nums[i][0], maxEdge);
            maxEdge = max(nums[i][1], maxEdge);
            mp[nums[i][0]] += 1;
            mp[nums[i][1]] += 1;
        }
        for (auto it = mp.begin(); it != mp.end(); ++it)
        {
            if (it->second == maxEdge - 1)
            {
                return (it->first);
            }
        }
        return (0);
    }
};