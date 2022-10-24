class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<pair<int,int>> q;
        for(int i=0;i<tickets.size();i++){
            q.push({i, tickets[i]});
        }
        int value = tickets[k];
        int time = 0;
        while(value!=0){
            auto temp = q.front();
            int val = temp.second;
            int index = temp.first;
            val = val-1;
            time++;
            if(index==k && val==0){
                break;
            }
            q.pop();
            if(val!=0){
                q.push({index, val});
            }
        }
        
        return time;
        
    }
};