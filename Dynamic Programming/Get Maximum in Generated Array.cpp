class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        vector<int> nums(500, 0);
        nums[1] = 1;
        int maxValue = nums[1];
        for (int i = 1; i <= ceil(n / 2); i++)
        {
            nums[2 * i] = nums[i];
            nums[2 * i + 1] = nums[i] + nums[i + 1];
            if (n >= 2 * i)
            {
                maxValue = max(nums[2 * i], maxValue);
            }
            if (n >= 2 * i + 1)
            {
                maxValue = max(nums[2 * i + 1], maxValue);
            }
        }
        return maxValue;
    }
};