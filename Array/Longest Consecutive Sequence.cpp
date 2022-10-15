class Solution {
public:
    int longestConsecutive(vector<int>& vec) {
        map<int,int> nums;
        if(vec.size()==0 ){
            return 0;
        }
        for(int i=0;i<vec.size();i++){
            nums[vec[i]] = 1;
        }
        
        int res = 1, currCount = 1;
        auto  it1 = nums.begin(), it = nums.begin();
        ++it;
        for(auto it2=it;it2!=nums.end();++it2){
            if((it2->first) - (it1->first)==1){
                currCount++;
            }
            else{
                currCount=1;
            }
            res = max(res, currCount);
            it1 = it2;
        }
        return res;
    }
};
