class Solution {
public:
    bool backspaceCompare(string s1, string s2) {
        int i=0,j=0,count1=0,count2=0;
        stack<char> a,b;
        while(i!=s1.length()){
            if(s1[i]=='#' && !a.empty()){
                a.pop();
            }
            else if(s1[i]!='#'){
                a.push(s1[i]);
            }
            i++;
        }
        while(j!=s2.length()){
            if(s2[j]=='#' && !b.empty()){
                b.pop();
            }
            else if(s2[j]!='#'){
                b.push(s2[j]);
            }
            j++;
        }
        if( (a.empty() && !b.empty()) && (!a.empty() && b.empty())){
            return(false);
        }
        if((a.empty() && b.empty())){
            return(true);
        }
        
        while(!a.empty() && !b.empty()){
            if(a.top()!=b.top()){
                //cout<<a.top()<<" "<<b.top()<<" check";
                return(false);
            }
            a.pop();
            b.pop();
            
        }
        if( (a.empty() && !b.empty()) || (!a.empty() && b.empty())){
            //cout<<"working";
            return(false);
        }
        return(true);
    }
};
