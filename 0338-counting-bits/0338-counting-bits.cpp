class Solution {
public:
    int countB(int n){
        int res = 0;
        while(n!=0){
            if(n&1){
                res++;
            }
            n/=2;
        }
        return res;
    }
    vector<int> countBits(int n) {
        vector<int> res;
        res.push_back(0);
        for(int i=1;i<=n;i++){
            res.push_back(countB(i));
        }
        
        // reverse(res.begin(),res.end());
        return res;
        
    }
};