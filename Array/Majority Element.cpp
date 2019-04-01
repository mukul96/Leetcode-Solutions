class Solution {
public:
    int majorityElement(vector<int>& a) {
        int count=1;
        int major=a[0];
        for(int i=1;i<a.size();i++){
            if(count==0){
                major=a[i];
                count=1;
            }
            else if(major==a[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return(major);
    }
};
