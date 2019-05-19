class Solution {
public:
    static string checkSum(int a){
        string sum;
        sum=to_string(a);
        return(sum);
    }
    static bool comp(int const &a,int const &b){
        string asum=checkSum(a);
        string bsum=checkSum(b);
        return asum<bsum;
}
    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for(int i=1;i<=n;i++){
            res.push_back(i);
        }
        sort(res.begin(),res.end(),comp);
        return(res);
    }
};
