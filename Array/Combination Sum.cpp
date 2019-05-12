class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> combinationSum(vector<int>& num, int target,vector<int> a={},int limit=0) {
        if(target==0){
            res.push_back(a);
            return {};
        }
        if(target<0){
            return {};
        }
        for(int i=limit;i<num.size();i++){
            a.push_back(num[i]);
            combinationSum(num,target-num[i],a,i);
            a.pop_back();
        }
        return(res);
    }
};
