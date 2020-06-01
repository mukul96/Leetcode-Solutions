class Solution
{
public:
    int findLength(vector<int> &a, vector<int> &b)
    {
        int res = INT_MIN;
        for (int i = 0; i < a.size(); i++)
        {
            int k = i;
            int count = 0;
            for (int j = 0; j < b.size(); j++)
            {
                if (k < a.size() && a[k] == b[j])
                {
                    count++;
                }
                else
                {
                    count = 0;
                }
                k++;
                res = max(count, res);
            }
        }

        for (int i = 0; i < b.size(); i++)
        {
            int k = i;
            int count = 0;

            for (int j = 0; j < a.size(); j++)
            {
                if (k < b.size() && b[k] == a[j])
                {
                    count++;
                }
                else
                {
                    count = 0;
                }
                k++;
                res = max(count, res);
            }
        }
        return (res);
    }
};