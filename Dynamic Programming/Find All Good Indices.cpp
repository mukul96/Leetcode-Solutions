class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> decreasing, increasing(n,1);
        decreasing.push_back(1);
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                decreasing.push_back(decreasing[i-1]+1);
            }
            else{
                decreasing.push_back(1);
            }
        }
        
         for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]){
                increasing[i] = increasing[i+1]+1;
            }
            else{
                increasing[i] = 1;
            }
        }
        vector<int> res;
        for(int i=k;i<n-k;i++){
            if(i+1<n && increasing[i+1]>=k && decreasing[i-1]>=k ){
                res.push_back(i);
            }
        }
        
        return res;
        
    }
};
