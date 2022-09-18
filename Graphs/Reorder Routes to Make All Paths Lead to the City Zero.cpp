class Solution {
public:
    
    void dfs(vector<vector<int>> & nums, vector<int> &visited, map<pair<int,int>, int> & mp, int val,int &count){
        
        visited[val] = 1;
        for(int i=0;i<nums[val].size();i++){
            if(!visited[nums[val][i]]){
                
                if(!mp[make_pair(nums[val][i],val)]){
                    count++;
                }
                
                dfs(nums,visited,mp, nums[val][i], count);
            }
        }
        
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        map< pair<int,int>, int> mp;
        vector<vector<int>> nums(n, vector<int> {});
        for(int i=0;i<connections.size();i++){
            mp[make_pair(connections[i][0],connections[i][1])] = 1;
            nums[connections[i][0]].push_back(connections[i][1]);
            nums[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int> visited(n,0);
        int count = 0;
        dfs(nums, visited, mp, 0, count);
        
        return count;
    }
};
