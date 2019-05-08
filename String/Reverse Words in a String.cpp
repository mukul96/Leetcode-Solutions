class Solution {
public:
    string reverseWords(string s) {
        vector<string> a;
        bool flag=false;
        string temp="";
        for(int i=0;i<s.length();i++){
             if(s[i]==' '){
                 if(flag){
                     a.push_back(temp);
                     flag=false;
                     temp="";
                 }
             }
            else{
                temp+=s[i];
                flag=true;
            }
        }
        if(flag){
            a.push_back(temp);
        }
        reverse(a.begin(),a.end());
        string result="";
        for(int i=0;i<a.size();i++){
            result+=a[i];
            if(i!=a.size()-1){
                result+=" ";
            }
        }
        return(result);
    }
};
