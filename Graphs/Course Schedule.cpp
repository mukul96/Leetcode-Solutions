class Solution {
public:
    bool dfs(map<int,vector<int> >& m ,vector<bool>& explored,vector<bool> &recursionStack,int i){
        if(!explored[i]){
            explored[i]=true;
            recursionStack[i]=true;
            for(int j=0;j<m[i].size();j++){
                if(!explored[m[i][j]] && dfs(m,explored,recursionStack,m[i][j])){
                    return(true);
                }
                if(recursionStack[m[i][j]]){
                    return(true);
                }
            }
            
        }
        recursionStack[i]=false;
        return(false);
    }
    
    bool canFinish(int n, vector<vector<int>>& p) {
        if(p.size()==0){
            return(true);
        }
        map<int,vector<int>> m;
        vector<bool> explored(n,false);
        vector<bool> recursionStack(n,false);
        for(int i=0;i<p.size();i++){
            m[p[i][1]].push_back(p[i][0]);
        }
        for(int i=0;i<n;i++){
            if(dfs(m,explored,recursionStack,i)){
                 return(false);
            }
            
        }
        return(true);
    }
};
