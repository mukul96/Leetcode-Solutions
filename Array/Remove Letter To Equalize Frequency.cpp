class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> mp;
        map<int, int> mp2;
        for(auto c: word)  mp[c]++;
        
        for(auto m: mp)  mp2[m.second]++;
        
        
        if(mp2.size() > 2) return false;
        map<int, int>::iterator it1 = mp2.begin();
        map<int, int>::iterator it2 = mp2.begin();
        it2++;
        
        if(mp2.size() == 1){
            if(mp.size() == 1 || it1->first == 1) return true;
            return false;
        }
       
        
        if(it1->first == 1 && it1->second == 1) return true;
        if(it1->first == it2->first-1 && it2->second == 1) return true;
        return false;
    }
};
