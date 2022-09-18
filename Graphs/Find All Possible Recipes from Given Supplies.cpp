class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string,int> visited, indegree;
        unordered_map<string,vector<string>> mp;
        queue<string> q;
        vector<string> res;
        for(int i=0;i<ingredients.size();i++){
            indegree[recipes[i]]+=ingredients[i].size();
            for(int j=0;j<ingredients[i].size();j++){
                mp[ingredients[i][j]].push_back(recipes[i]);
            }
        }
        
        for(int i=0;i<supplies.size();i++){
            if(indegree[supplies[i]]==0){
                q.push(supplies[i]);
            }
        }
        
        while(!q.empty()){
            string temp = q.front();
            visited[temp] = 1;
            q.pop();
            for(int i=0;i<mp[temp].size();i++){
                indegree[mp[temp][i]]-=1;
                if(indegree[mp[temp][i]]==0){
                    q.push(mp[temp][i]);
                }
            }
        }
        
        for(int i=0;i<recipes.size();i++){
            if(indegree[recipes[i]]==0){
               res.push_back(recipes[i]);
            }
        }
        return res;
        
    }
};
