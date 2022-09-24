class Solution {
public:
    
    void dfs(map<int,vector<int>> &mp, int i, vector<int> &curr,vector<int> &visited){
        
        visited[i] = 1;
        for(int j=0;j<mp[i].size();j++){
            if(!visited[mp[i][j]]){
                curr.push_back(mp[i][j]);
                dfs(mp, mp[i][j], curr, visited);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& nums) {
        
        map<int,vector<int>> mp;
        vector<vector<int>> res;
        for(int i=0;i<nums.size();i++){
            mp[nums[i][1]].push_back(nums[i][0]);
        }
       
        for(int i=0;i<n;i++){
            vector<int> visited(n,0);
            vector<int> temp;
            dfs(mp, i, temp, visited);
            sort(temp.begin(), temp.end());
            res.push_back(temp);
            
        }          
        return res;
        
    }
};
