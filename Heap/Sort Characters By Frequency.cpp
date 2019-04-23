class Solution {
public:
    string frequencySort(string s) {
       priority_queue<pair<int,char>> a;
       map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]+=1;
        }
        for(auto it=m.begin();it!=m.end();++it){
            
            a.push(make_pair(it->second,it->first));
        }
        string result="";
        while(!a.empty()){
            pair<int,char> temp=a.top();
            cout<<(temp.second);
            for(int i=0;i<temp.first;i++){
                result+=temp.second;
            }
            a.pop();
        }
        return(result);
    }
};
