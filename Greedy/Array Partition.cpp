class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i = 0 , j = n-1, res = 0;
        while(i<=n-2){
            res +=min(nums[i], nums[i+1]);
            i=i+2;
        }
        
        return res;
        
    }
};
