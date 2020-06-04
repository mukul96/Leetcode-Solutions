class Solution {
public:
    int longestValidParentheses(string s) {
        //return(0);
        if(s.length()==0 || s.length()==1){
            return(0);
        }
        int i=0;
        stack<pair<char,int>> st;
        int count=0,res=INT_MIN;
        //bool flag=false;
        //cout<<s.length();
        while(i<s.length()){
            
            if(st.empty()){
                st.push(make_pair(s[i],i));   
            }
            else if(st.top().first=='(' && s[i]==')'){
                st.pop();
            }
            else{
                st.push(make_pair(s[i],i));
               // flag=false;
            }
            if(st.empty()){
                res=max(res,i+1);
            }
            else{
                pair <char, int> p = st.top();
                res=max(i-p.second,res);
            }
            
            i++;
        }
        return(res);
    }
};