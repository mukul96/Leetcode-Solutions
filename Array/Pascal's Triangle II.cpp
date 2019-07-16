class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i=1;
        int n=rowIndex+1;
        vector<vector<int>> res;
        vector<int> a;
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                a.push_back(1);
            }
            res.push_back(a);
            a.clear();
        }
        for(int i=2;i<n;i++){
            for(int j=1;j<res[i].size()-1;j++){
                res[i][j]=res[i-1][j-1]+res[i-1][j];
            }
        }
        return(res[rowIndex]);
    }
};
