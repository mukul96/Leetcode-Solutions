class Solution {
public:
    int lastStoneWeight(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        
        if(nums.size()==1){
            return nums[0];
        }
        while(!pq.empty() && pq.size()!=1){
            int y = pq.top(); pq.pop();
            int x = pq.top(); pq.pop();
            if(x!=y){
                pq.push(y-x);
            }
        }
        return pq.empty() ? 0:pq.top();
    }
};
