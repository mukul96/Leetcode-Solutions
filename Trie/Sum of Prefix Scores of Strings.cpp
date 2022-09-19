struct Trie{
    unordered_map<char,Trie*> next = {};
    int count = 0;
};


class Solution {
public:
    vector<int> sumPrefixScores(vector<string>& nums) {
        Trie *root = new Trie();
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            Trie *node = root;
            for(int j=0;j<nums[i].size();j++){
                if(!node->next[nums[i][j]]){
                    node->next[nums[i][j]] = new Trie();  
                }
                node->next[nums[i][j]]->count+=1;
                node = node->next[nums[i][j]];
            }
        }
        
        for(int i=0;i<nums.size();i++){
            Trie *node = root;
            int count = 0;
            for(int j=0;j<nums[i].size();j++){
                count = count + node->next[nums[i][j]]->count;
                node = node->next[nums[i][j]];
            }
            res.push_back(count);
        }   
        return res;
    }
};
