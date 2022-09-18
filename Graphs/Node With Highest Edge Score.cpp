class Solution {
public:
    int edgeScore(vector<int>& nums) {
        int n = nums.size();
        long long maxVal = -1, currIndex;
        unordered_map<long long,long long> mp;
        for(long long i=0;i<nums.size();i++){
            mp[nums[i]] +=i;
        }
        for(long long i=0;i<n;i++){
            if(mp[i]>maxVal){
                maxVal = mp[i];
                currIndex = i;
            }
        }
        
        return currIndex;
    }
};
