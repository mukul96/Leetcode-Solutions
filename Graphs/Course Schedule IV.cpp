class Solution {
public:
    vector<bool> checkIfPrerequisite(int n, vector<vector<int>>& pre, vector<vector<int>>& queries) {
        vector<bool> res;
        unordered_map<int,vector<int>> nums;
        queue<pair<int,int>> q;
        map<pair<int,int>, int> preQuery;
        
        for(int i=0;i<pre.size();i++){
            
            nums[pre[i][0]].push_back(pre[i][1]);
        }
        
        for(int i=0;i<n;i++){
            vector<int> visited(n,0);
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int temp = q.front();
                q.pop();
                visited[temp] = 1;
                for(int j=0;j<nums[temp].size();j++){
                    if(!visited[nums[temp][j]]){
                        q.push(nums[temp][j]);
                    }
                }
            }
            for(int k=0;k<n;k++){
                if(visited[k]){
                    auto mp = make_pair(i,k);
                    preQuery[mp] = 1;
                }
            }
        }
        
        for(int i=0;i<queries.size();i++){
            pair<int,int> mp = make_pair(queries[i][0],queries[i][1]);
            if(preQuery[mp]){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        
       
        return res;
    }
};
