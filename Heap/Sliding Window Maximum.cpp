class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
      int n=nums.size();
      vector<int> b;
      if(n==0){
          return b;
      }
      for(int i=0;i<n-k+1;i++){
          priority_queue<int> a;
          for(int j=0;j<k;j++){
              a.push(nums[i+j]);
          }
          b.push_back(a.top());
      }
      return(b);
    }
};
