class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int maxTaskTime = logs[0][1];
        int empId = logs[0][0];
        int lastEndedTaskTime = logs[0][1];
        for(int i=1;i<logs.size();i++){
            int currTaskTime = logs[i][1] - lastEndedTaskTime;
            if(currTaskTime>maxTaskTime || (currTaskTime==maxTaskTime && empId> logs[i][0])){
                maxTaskTime = currTaskTime;
                empId = logs[i][0];
            }
            lastEndedTaskTime = logs[i][1];
        }
        
        return (empId);
        
    }
};
