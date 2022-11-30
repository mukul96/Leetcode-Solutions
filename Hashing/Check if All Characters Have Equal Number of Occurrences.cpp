class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mp;
        int count = 0;
        for(int i=0;i<s.length();i++){
            mp[s[i]]+=1;
            count = mp[s[i]];
        }
        
        for(auto it = mp.begin();it!=mp.end();++it){
            if(count!=(it->second)){
                return false;
            }
        }
        return true;
    }
};
