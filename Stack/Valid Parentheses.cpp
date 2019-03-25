class Solution {
public:
    bool isValid(string s) {
        stack<char> a;
        if(s==""){
            return(true);
        }
        a.push(s[0]);
        int i=1;
        while(i!=s.size()){
            if(s[i]==')' &&  !a.empty() && a.top()=='('){
                a.pop();
            }
            else if(s[i]==']' && !a.empty() && a.top()=='['){
                a.pop();
            }
            else if(s[i]=='}' && !a.empty() && a.top()=='{'){
                a.pop();
            }
            else{
                a.push(s[i]);
            }
            i++;
        }
        if(a.empty()){
            return(true);
        }
        return(false);
    }
};
