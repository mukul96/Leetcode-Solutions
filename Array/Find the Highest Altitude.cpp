class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int maxValue = 0;
        int currAltitude = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            currAltitude = currAltitude + gain[i];
            maxValue = max(maxValue, currAltitude);
        }
        return maxValue;
    }
};