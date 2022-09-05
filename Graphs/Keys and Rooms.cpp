class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int> > &rooms)
    {
        int n = rooms.size();
        vector<int> visited(n, 0);
        queue<int> q;
        q.push(0);
        int count = 1;
        visited[0] = 1;
        while (!q.empty())
        {
            int frontVal = q.front();
            q.pop();
            for (int i = 0; i < rooms[frontVal].size(); i++)
            {
                if (!visited[rooms[frontVal][i]])
                {
                    visited[rooms[frontVal][i]] = 1;
                    count++;
                    q.push(rooms[frontVal][i]);
                }
            }
        }
        return count == n;
    }
};