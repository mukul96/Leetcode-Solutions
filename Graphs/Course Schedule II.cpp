class Solution {
public:
    void dfs(int v,map<int,vector<int>>& m,vector<int>& s,vector<int>& a){
        a[v]=1;
        for(int i=0;i<m[v].size();i++){
            if( !a[m[v][i]] ){
                dfs(m[v][i],m,s,a);
            }
        }
        s.push_back(v);
    }
        

    vector<int> findOrder(int n, vector<vector<int>>& p) {
        map<int,vector<int> > m;
        vector<int> a(n,0);
        vector<int> s;
        for(int i=0;i<p.size();i++){
            m[p[i][1]].push_back(p[i][0]);
        }
        for(int i=0;i<n;i++){
            if(!a[i]){
                dfs(i,m,s,a);
            }
        }
        reverse(s.begin(),s.end());
        return(s);
        
    }
};
