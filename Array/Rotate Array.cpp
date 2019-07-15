class Solution {
public:
    void rotate(vector<int>& a, int r) {
        int n=a.size();
        if(n==1){
            return;
        }
        r=r%n;
        reverse(a.begin(),a.end());
        reverse(a.begin()+r,a.end());
	    
	    
	    reverse(a.begin(),a.begin()+r);
	    
    }
};
