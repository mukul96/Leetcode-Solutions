class Solution
{
public:
    int minCost(string nums, vector<int> &neededTime)
    {
        int n = nums.size(), i = 0;
        long long res = 0;
        while (i < n)
        {
            long long currSum = neededTime[i];
            long long maxValue = neededTime[i];
            bool flag = false;
            while (i + 1 < n && nums[i] == nums[i + 1])
            {
                currSum += neededTime[i + 1];
                if (maxValue < neededTime[i + 1])
                {
                    maxValue = neededTime[i + 1];
                }
                i++;
                flag = true;
            }

            if (flag)
            {
                res = res + currSum - maxValue;
            }
            else
            {
                i++;
            }
        }
        return res;
    }
};