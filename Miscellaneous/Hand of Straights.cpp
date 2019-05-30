class Solution {
public:
    bool isNStraightHand(vector<int>& nums, int w) {
        map<int,int> m;
        if((nums.size()) %w !=0){
            return(false);
        }
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        for(auto it=m.begin();it!=m.end();++it){
            if(it->second >w){
                return(false);
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+w){
            for(int j=i;j<i+w;j++){
                if(  (j+1<i+w)  && (nums[j+1]-nums[j]>1) ){
                    return(false);
                }
            }
        }
        cout<<"size of map is "<< ((nums.size())%w >= m.size()) ;
        if( (nums.size())/w >= m.size() ){
            return(false);
        }
        return(true);
    }
};
