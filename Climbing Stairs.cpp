class Solution {
public:
    int climbStairs(int n) {
        if(n==1){
            return(1);
        }
        int a=1,b=1,sum=0;
        for(int i=2;i<=n;i++){
            sum=a+b;
            a=b;
            b=sum;
        }
        return(sum);
    }
};
