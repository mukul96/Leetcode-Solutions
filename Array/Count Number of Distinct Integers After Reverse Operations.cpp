class Solution {
public:
    int reverseNumber(int number){
        int newNumber = 0, i=0;
        while(number!=0){
            newNumber = newNumber*10 + number%10;
            number = number/10;
        }
        
        return newNumber;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int reverseNum = reverseNumber(nums[i]);
            mp[nums[i]] = 1;
            mp[reverseNum] = 1;
        }
        
        return mp.size();
    }
};
