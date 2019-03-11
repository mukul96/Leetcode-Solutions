class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        
        int i=0,j=a.size()-1;
        vector<int> res;
        while(i<=j){
            if( abs(a[i]) > abs(a[j])  ){
                res.push_back(a[i] *a[i]);
                i++;
            }
            else{
                res.push_back(a[j] *a[j]);
                j--;
            }
        }
        
        i=0,j=a.size()-1;
        while(i<=j){
            swap(res[i],res[j]);
            i++;
            j--;
        }
        
    
        return(res);
    }
};
