class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1){
            return(nums.size());
        }
        set<int> myset(nums.begin(),nums.end());
        int k=1;
        set<int>::iterator it=myset.begin();
        int m=*it,mx=INT_MIN;++it;
        for (; it!=myset.end(); ++it){
            if((*it)==m+1){
                k++;
                m=*it;
                mx=max(k,mx);
            }
            else{
                k=1;
                m=*it;
            }
        }
    
        return(max(mx,k));
    }
};
