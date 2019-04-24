class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       priority_queue<pair<int,int>> a;
       map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        for(auto it=m.begin();it!=m.end();++it){
            
            a.push(make_pair(it->second,it->first));
        }
        
        vector<int> result;
       
        
        //cout<<(temp.second);
        for(int i=0;i<k;i++){
            pair<int,int> temp=a.top();
            result.push_back(temp.second);
            a.pop();
            }
            
        
        return(result);
    }
};
