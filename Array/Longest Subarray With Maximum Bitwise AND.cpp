class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 1, n = nums.size();
        int currLength = 1, maxLength = 1, currVal = nums[0], maxValue = nums[0];
        while(i<n){
            if(nums[i]==nums[i-1]){
                currLength++;
            }
            else{
                currVal = nums[i];
                currLength = 1;
            }
            
            i++;
            // cout<<"currVal "<<currVal<<endl;
            // cout<<"currLength "<<currLength<<endl;
        
            if(currVal>maxValue){
                maxLength = currLength;
                maxValue = currVal;
            }
            else if(currVal==maxValue){
                maxLength = max(maxLength, currLength);
            }
            
            
        }
        
        return maxLength;
        
    }
};
