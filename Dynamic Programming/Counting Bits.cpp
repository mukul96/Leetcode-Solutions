class Solution {
public:
    vector<int> countBits(int n) {
        
        
        vector<int> a(n+1,0);
        if(n==0){
            return(a);
        }
        a[1]=1;
        if(n==1){
            return(a);
        }
        a[2]=1;
        int curr=2;
        for(int i=3;i<=n;i++){
            if(i%2!=0){
                a[i]=a[i-1]+1;
            }
            else{
                if(curr*2==i){
                    curr*=2;
                    a[i]=1;
                }
                else{
                    a[i]=a[curr]+a[i-curr];
                }
                
                
            }
        }
        vector<int> b(a.begin()+1,a.end());
        return(a);
        
        
    }
};