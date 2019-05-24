class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> a;
        int w=0;
        for(int i=0;i<s.size();i++){
            a.push(s[i]);
        }
        int w1=0,w2=0;
        while(!a.empty()){
            if(!a.empty()){
                w1=a.top();
                a.pop();
                if(a.empty()){
                    return(w1);
                }
                else{
                    w2=a.top();a.pop();
                    if(w1!=w2){
                        a.push(max(w1,w2)-min(w1,w2));
                    }
                }
            }
            
        }
        
        
        return(0);
    }
};
