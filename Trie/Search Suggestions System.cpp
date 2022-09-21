struct Trie{
    unordered_map<char,Trie*> next = {};
    vector<string> vec = {};
};

class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        Trie *root = new Trie();
        vector<vector<string>> res;
        for(int i=0;i<products.size();i++){
            Trie *node = root;
            for(int j=0;j<products[i].size();j++){
                if(!node->next[products[i][j]]){
                    node->next[products[i][j]] = new Trie();  
                }
                node->next[products[i][j]]->vec.push_back(products[i]);
                node = node->next[products[i][j]];
            }
        }
        
            Trie *node = root;
            for(int j=0;j<searchWord.length();j++){
                if(!node->next[searchWord[j]]){
                    node->next[searchWord[j]] = new Trie();
                    res.push_back({});
                }
                else{
                    vector<string> temp = node->next[searchWord[j]]->vec;
                    sort(temp.begin(),temp.end());
                    if(temp.size()>3){
                        temp.resize(3);
                    }
                    
                    
                    res.push_back(temp);
                }
                
                node = node->next[searchWord[j]];
            }
        
        return res;
            
    }
};
