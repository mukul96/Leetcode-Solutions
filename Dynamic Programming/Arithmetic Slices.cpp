class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1 || n==2){
            return(0);
        }
        vector<int> a(n,0);
        if(nums[1]-nums[0]==nums[2]-nums[1]){
            a[2]=1;
        }
        int result=a[2];
        for(int i=3;i<n;i++ ){
            if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]){
                a[i]+=1+a[i-1];
            }
            result+=a[i];
        }
        return(result);
    }
};
