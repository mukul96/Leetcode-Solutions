class Solution {
public:
    string getBinaryRepresentation(int n){
        string num = "0";
        
        for (int i = 1 << 30; i > 0; i = i / 2){
            if((n & i) != 0){
                num = num + "1";
            }
            else{
                num = num + "0";
            }
        }
        return num;
    }

    int minimizeXor(int num1, int num2) {
        string num1String = getBinaryRepresentation(num1);
        string num2String = getBinaryRepresentation(num2);
        int count = 0;
        for(int i=0;i<num2String.length();i++){
            if(num2String[i]=='1'){
                count++;
            }
        }
        string res = "00000000000000000000000000000000";
        int firstIndex;
        bool flag =false;
        for(int i=0;i<num1String.length();i++){
            if(num1String[i]=='1' && count>0){
                res[i] = '1';
                count--;
            }
        }
        
        for(int i=31;i>=0;i--){
            if(count>0 && res[i]!='1'){
                res[i] = '1';
                count--;
            }
        }
        
        int val = 0;
        for(int i=0;i<res.length();i++){
            if(res[i]=='1'){
                val = val + pow(2,31-i);
            }  
        }
        return val;
        
    }
};
