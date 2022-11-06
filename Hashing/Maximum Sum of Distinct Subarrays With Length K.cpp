class Solution
{
public:
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        long long maxSum = 0;
        long long sumOfCurr = 0;
        unordered_map<int, int> mp;
        int n = nums.size();
        int countOfSame = 0;
        for (int i = 0; i < k; i++)
        {
            if (mp[nums[i]] > 0)
            {
                countOfSame++;
            }
            mp[nums[i]] += 1;
            sumOfCurr += nums[i];
        }

        if (countOfSame == 0)
        {
            maxSum = max(sumOfCurr, maxSum);
        }
        int i = k;
        while (i < n)
        {
            sumOfCurr -= nums[i - k];
            if (mp[nums[i - k]] > 1)
            {
                countOfSame--;
            }
            mp[nums[i - k]] -= 1;

            if (mp[nums[i]])
            {
                countOfSame++;
            }
            mp[nums[i]] += 1;
            sumOfCurr += nums[i];

            if (countOfSame == 0)
            {
                maxSum = max(sumOfCurr, maxSum);
            }
            i++;
        }

        return maxSum;
    }
};