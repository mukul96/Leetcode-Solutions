class Solution {
public:
    int maxProfit(vector<int>& a) {
        
        int n=a.size();
        if(n==0){
            return(0);
        }
        vector<int> maxRight(n,-1);
        vector<int> minLeft(n,INT_MAX);
        minLeft[0]=a[0];
        maxRight[n-1]=a[n-1];
        for(int i=1;i<n;i++){
            minLeft[i]=min(minLeft[i-1],a[i]);
        }
        for(int i=n-2;i>=0;i--){
            maxRight[i]=max(maxRight[i+1],a[i]);
        }
        int maxProfit=0;
        for(int i=0;i<n-1;i++){
            maxProfit=max(maxProfit,maxRight[i+1]-minLeft[i]);
        }
        
        return(maxProfit);
    }
};
