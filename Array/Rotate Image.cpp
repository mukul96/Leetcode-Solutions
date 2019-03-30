class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n= a[0].size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                swap(a[i][j],a[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=(n-1)/2;j++){
                swap(a[i][j],a[i][n-1-j]);
            }
        }
    }
};
