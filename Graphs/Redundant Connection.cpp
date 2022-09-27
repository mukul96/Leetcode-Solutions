class Solution {
public:
    int find(vector<int> & parent, int i){
        if(parent[i]==i){
            return i;
        }
        else{
            return find(parent, parent[i]);
        }
    }
    vector<int> findRedundantConnection(vector<vector<int>>& nums) {
        unordered_map<int,int> mp;
        int count = 0;
        vector<int> res;
        int a=0, b;
        for(int i=0;i<nums.size();i++){
            if(!mp[nums[i][0]]){
                count++;
                mp[nums[i][0]]=1;
            }
            if(!mp[nums[i][1]]){
                count++;
                mp[nums[i][1]]=1;
            }
        }
        vector<int> parent(count+1,0);
        for(int i=1;i<=count;i++){
            parent[i] = i;
        }
        for(int i=0;i<nums.size();i++){
            int x = find(parent, nums[i][0]);
            int y = find(parent, nums[i][1]);
            if(x!=y){
                parent[y] = x;
            }
            else{
                a = nums[i][0];
                b = nums[i][1];
            }
        }
        if(a==0){
            return res;
        }
        res.push_back(a);
        res.push_back(b);
        return res;
    }
};
