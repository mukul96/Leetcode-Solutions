class Solution {
public:
    vector<int> twoSum(vector<int>& a, int sum) {
        int i=0,j=a.size()-1;vector<int> res;
        
        while(i<j){
            if(a[i]+a[j]==sum){
                res.push_back(i+1);
                res.push_back(j+1);
                break;
            }
            else if(a[i]+a[j]>sum){
                j--;
            }
            else{
                i++;
            }
        }
        return(res);
    }
};
