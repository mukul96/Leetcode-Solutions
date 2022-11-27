class Solution {
public:
    string getString(string s){
        stack<char>  st;
        string res = "";
        for(int i=0;i<s.length();i++){
            if(s[i]=='#' && !st.empty()){
                st.pop();
            }
            else if(s[i]!='#'){
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            res+=st.top();
            st.pop();
        }
        reverse(s.begin(), s.end());
        return res;
    }
    bool backspaceCompare(string s, string t) {
        string a = getString(s);
        string b = getString(t);
        
        if(a==b){
            return true;
        }
        return false;
    }
};
