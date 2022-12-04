class Solution {
public:
    int reverseNumber(int number){
        int currNumber = 0;
        while(number!=0){
            currNumber = currNumber*10 + (number%10);
            number = number/10;
        }
        return currNumber;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]] = 1;
            int reverseNum = reverseNumber(nums[i]);
            mp[reverseNum] = 1;
        }
        
        return mp.size();
        
    }
};
