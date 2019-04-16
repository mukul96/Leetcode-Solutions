class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       map<int,bool> m;
       map<int,bool> a;
       for(int i=1;i<=n;i++){
           m[i]=false;
           a[i]=false;
       } 
       for(int i=0;i<trust.size();i++){
           m[trust[i][0]]=true;
       }
        
        int result=-1;
        for(int i=1;i<=n;i++){
            if(m[i]==false){
                result=i;
            }
        }
        if(result==-1){
            return(result);
        }
        a[result]=true;
        for(int i=0;i<trust.size();i++){
           if(trust[i][1]==result){
               a[trust[i][0]]=true;
           }
       }
        for(int i=1;i<n;i++){
            if(a[i]==false){
                return(-1);
            }
        }
    return(result);
    }
};
