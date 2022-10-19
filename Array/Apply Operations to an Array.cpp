class Solution
{
public:
    vector<int> applyOperations(vector<int> &nums)
    {
        vector<int> res;
        int countOfZero = 0;
        int n = nums.size();
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] == nums[i + 1])
            {
                if (nums[i] == 0)
                {
                    countOfZero++;
                }
                else
                {
                    res.push_back(nums[i] * 2);
                }
                nums[i + 1] = 0;
            }

            else
            {

                if (nums[i] == 0)
                {
                    countOfZero++;
                }
                else
                {
                    res.push_back(nums[i]);
                }
            }
        }

        if (nums[n - 1] == 0)
        {
            countOfZero++;
        }
        else
        {
            res.push_back(nums[n - 1]);
        }

        for (int i = 0; i < countOfZero; i++)
        {
            res.push_back(0);
        }
        return res;
    }
};