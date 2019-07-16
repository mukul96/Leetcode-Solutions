class Solution {
public:
    int findMin(vector<int>& a) {
        int i=0;
        int j=a.size()-1;
        int mid=(i+j)/2;
        int minimum=INT_MAX;
        while(i<=j){
            mid=(i+j)/2;
            if(a[i]>=a[j]){
                if(a[mid]>=a[j]){
                    minimum=min(a[mid],minimum);
                    i=mid+1;
                }else if (a[mid]>=a[j]){
                    minimum=min(a[mid],minimum);
                    j=mid-1;
                }
                else{
                    j--;
                }
            }
            else if(a[i]<a[j]){
                if(a[mid]>a[j]){
                    minimum=min(a[mid],minimum);
                    i=mid+1;
                }else if(a[mid]>a[j]){
                    minimum=min(a[mid],minimum);
                    j=mid-1;
                }
                else{
                    j--;
                }
            }
        }
        return(min(a[mid],minimum));
    }
};
