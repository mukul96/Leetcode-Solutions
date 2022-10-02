class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size(), size2 = nums2.size(), res1 = 0, res2 = 0, res ;
        if(size2%2!=0){
            for(int i=0;i<size1;i++){
                res1 = res1^nums1[i]; 
            }
        }
        
        
        if(size1%2!=0){
            for(int i=0;i<size2;i++){
                res2 = res2^nums2[i]; 
            }
        }
        return res1^res2;
    }
};
