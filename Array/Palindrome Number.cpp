class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int j = s.length()-1, i=0;
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
