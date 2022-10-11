class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        vector<int> nums(26,0);
        for(int i=0;i<s.length();i++){
            if(nums[s[i]-'a']==0){
                mp[s[i]] = i;
            }
            nums[s[i]-'a']+=1;
            
        }  
        int miniMumIndex = INT_MAX;
        for(auto it = mp.begin();it!=mp.end();++it){
            char a = it->first;
            if(nums[a-'a']==1 && miniMumIndex> (it->second)){
                miniMumIndex =  it->second;
            }
        }
        
        
        return miniMumIndex==INT_MAX? -1: miniMumIndex;
    }
};
