class myComparator {
  public:
    bool operator() (pair<int,int> a, pair<int,int> b) {
      return a.second>b.second;
    }
};  

class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
       
        
        map<int, vector<pair<int, double>>> mp;
        int res;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]].push_back({edges[i][1], edges[i][2]});   
            mp[edges[i][1]].push_back({edges[i][0], edges[i][2]});   
        }
        
        int resVisitedCount = INT_MAX;
        for(int j=0;j<n;j++){
            vector<int> visited(n,0);
            vector<double> dist(n, INT_MAX);
            priority_queue<pair<int, int>, vector<pair<int,int>>, myComparator> q;
            int currVisitedCount = 0;
            dist[j] = 0;
            q.push({j,0});
            visited[j] = 1;
            while(!q.empty()){
                auto temp = q.top();
                int neigbour = temp.first;
                int weight = temp.second;
                q.pop();
                for(int i=0;i<mp[neigbour].size();i++){
                    auto newPair = mp[neigbour][i];
                    auto newNeighbour = newPair.first;
                    auto newWeight = newPair.second;
                    if(dist[newNeighbour] > newWeight+dist[neigbour] ){
                        visited[newNeighbour] = 1;
                        int currWeight = newWeight+weight;
                        dist[newNeighbour] = currWeight;
                        q.push({newNeighbour, currWeight});
                    }
                }
            }
            
            for(int i=0;i<visited.size();i++){
                if(j!=i && visited[i] && dist[i]<=distanceThreshold ){
                    currVisitedCount++;
                }
            }
            if(currVisitedCount<=resVisitedCount){
                resVisitedCount = currVisitedCount;
                res = j;
            }
        }
        
        return res;

    }
};
