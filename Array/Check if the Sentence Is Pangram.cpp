class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int> mp;
        for(int i=0;i<sentence.size();i++){
            mp[sentence[i]] = 1;
        }
        return mp.size()==26;
    }
};
