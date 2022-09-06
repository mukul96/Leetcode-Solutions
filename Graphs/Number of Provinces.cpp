class Solution
{
public:
    int findCircleNum(vector<vector<int> > &nums)
    {
        int n = nums.size();
        vector<int> visited(n + 1, 0);
        int count = 0;
        queue<int> q;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!visited[i + 1])
            {
                //cout<<"i. visited "<<visited[i+1]<<endl;
                count++;
                q.push(i);
                while (!q.empty())
                {
                    int frontVal = q.front();
                    visited[frontVal + 1] = 1;
                    q.pop();
                    for (int j = 0; j < nums[frontVal].size(); j++)
                    {
                        //cout<<"j+1 "<<j+1<<" "<<visited[j+1]<<" "<<nums[frontVal][j]<<endl;
                        if (!visited[j + 1] && nums[frontVal][j] == 1)
                        {
                            //cout<<"just checking"<<endl;
                            visited[j + 1] = 1;
                            q.push(j);
                        }
                    }
                }
            }
        }
        return count;
    }
};