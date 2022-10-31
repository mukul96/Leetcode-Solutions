class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1){
            return n;
        }
        vector<int> nums(n+1,0);
        nums[1] = 1;
        for(int i=2;i<=n;i++){
            nums[i] = nums[i-1] + nums[i-2];
        }
        
        return nums[n];
    }
};