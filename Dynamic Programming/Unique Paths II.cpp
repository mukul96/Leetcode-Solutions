class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
        int m=nums.size(),n=nums[0].size();
        vector<vector<int>> dp(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n ;j++){
                
                if(i==0 && j==0 && nums[i][j]){
                    dp[i][j]=0;
                }
                else if(i==0 && j==0 && !nums[i][j]){
                    dp[i][j]=1;
                }
                else{    
                    if(i-1<0){
                        if(!nums[i][j-1]){
                            dp[i][j]=dp[i][j-1];
                        }
                        else{
                            dp[i][j]=0;
                        }
                    }
                    else if(j-1<0){
                        if(!nums[i-1][j]){
                            dp[i][j]=dp[i-1][j];
                        }
                        else{
                            dp[i][j]=0;
                        }
                    }
                    else{
                        if(!nums[i-1][j] && !nums[i][j-1]){
                            dp[i][j]=dp[i-1][j] + dp[i][j-1];
                        }
                        else if(!nums[i-1][j]){
                            dp[i][j]=dp[i-1][j];
                        }
                        else if(!nums[i][j-1]){
                            dp[i][j]=dp[i][j-1];
                        }
                        else{
                            dp[i][j]=0;
                        }
                        
                    }
                    
                }
                
            }
        }
        
        if(nums[m-1][n-1]){
            return(0);
        }
        return(dp[m-1][n-1]);
    }
};