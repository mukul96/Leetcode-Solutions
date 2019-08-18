class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int m=s2.length();
        int n=s1.length();
        vector<vector<int>> a(n+1,vector<int> (m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s1[i-1]==s2[j-1]){
                    a[i][j]=1+a[i-1][j-1];
                }
                else{
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                }
            }
        }
        return(a[n][m]);
    }
};