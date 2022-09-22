class Solution {
public:
    bool isCovered(vector<vector<int>>& nums, int left, int right) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            for(int j=nums[i][0];j<=nums[i][1];j++){
                mp[j]=1;
            }
        }
        for(int i=left;i<=right;i++){
            if(!mp[i]){
                return false;
            }
        }
        return true;
    }
};
