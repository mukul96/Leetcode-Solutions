class Solution {
public:
    bool validateStackSequences(vector<int>& pu, vector<int>& po) {
        int i=0,j=0;
        stack<int> a;
        //a.pu[0];
        while(i!=pu.size() || j!=po.size()){
            if(!a.empty() && a.top()==po[j]){
                a.pop();
                j++;
            }
            else if(i!=pu.size()){
                a.push(pu[i]);
                i++;
            }
            else if(i==pu.size() && !a.empty() && a.top()!=po[j]){
                return(false);
            }
        }
        return(true);
    }
};
