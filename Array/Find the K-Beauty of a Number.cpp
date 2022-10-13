class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int res = 0;
        int n = s.length();
        for(int i=0;i<n-k+1;i++){
            string temp = s.substr(i,k);
            int val = stoi(temp);
            if( val!=0 && num%val==0){
                res++;
            }
        }
        return res;
    }
};
