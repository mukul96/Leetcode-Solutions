class Solution {
public:
    bool validColor(vector<vector<int>>& nums, vector<int> & colors, int color,int i){
        colors[i] = color;
        
        for(int j=0;j<nums[i].size();j++){
            if(colors[nums[i][j]]==-color){
                continue;
            }
            else if(colors[nums[i][j]] == color || 
!validColor(nums, colors, -color, nums[i][j]) ){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> colors(n,0);
        vector<int> q;
        for(int i=0;i<nums.size();i++){
            if(colors[i]==0 && !validColor(nums, colors, 1, i)){
                return false;
            }
        }
        
        return true;
        
    }
};
