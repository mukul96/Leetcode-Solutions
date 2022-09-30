static bool compare(vector<int> a, vector<int> b){
        return a[0] < b[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end(), compare);
        int start = nums[0][0];
        int end = nums[0][1];
        for(int i=1;i<nums.size();i++){
            if(end>=nums[i][0]){
                end = max(nums[i][1], end);
            }
            else{
                res.push_back({start,end});
                start = nums[i][0];
                end = nums[i][1];
            }
        }
        
        res.push_back({start,end});
        return res;
    }
};
