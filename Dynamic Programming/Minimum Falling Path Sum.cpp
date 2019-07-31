class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& a) {
        for(int i=1;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
                int x=INT_MAX,z=INT_MAX,y=INT_MAX;
                if(j==0){
                    x=a[i-1][j];
                    y=a[i-1][j+1];
                }
                else if(j==a[i].size()-1){
                    x=a[i-1][j];
                    z=a[i-1][j-1];
                }
                else{
                    x=a[i-1][j];
                    y=a[i-1][j+1];
                    z=a[i-1][j-1];
                }
                a[i][j]=a[i][j]+min(x,min(y,z));
            }
        }
        int res=INT_MAX,n=a[0].size(),i=a.size()-1;
        for(int j=0;j<n;j++){
            res=min(res,a[i][j]);
        }
        //cout<<a[i-1][0];
        return(res);
    }
};
