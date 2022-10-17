class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxVal = -1;
        for(int i=0;i<nums.size();i++){
            int val = -1*(nums[i]);
            if(mp[val]){
                maxVal = max(maxVal, abs(nums[i]));
            }
            mp[nums[i]]  = 1;
        }
        return maxVal;
    }
};
