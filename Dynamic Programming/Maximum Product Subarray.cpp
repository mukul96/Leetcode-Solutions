class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int positiveProduct=1,negativeProduct=1;
        int maxProduct=INT_MIN;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==0){
                positiveProduct=1;
                negativeProduct=1;
                maxProduct=max(maxProduct,0);
            }
            else if(nums[i]<0){
                swap(positiveProduct,negativeProduct);
                positiveProduct=max(positiveProduct*nums[i],nums[i]);
                negativeProduct=min(negativeProduct*nums[i],nums[i]);
                maxProduct=max(maxProduct,positiveProduct);
                maxProduct=max(maxProduct,negativeProduct);
                
                
            }
            else{
                
                positiveProduct=max(positiveProduct*nums[i],nums[i]);
                negativeProduct=min(negativeProduct*nums[i],nums[i]);
                cout<<positiveProduct<<" ";
                maxProduct=max(maxProduct,positiveProduct);
                maxProduct=max(maxProduct,negativeProduct);
                
            }
            //positiveProduct*=nums[i];
            
        }
        return(maxProduct);
    }
};