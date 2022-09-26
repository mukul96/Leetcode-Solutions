typedef pair<int, int> pii;

class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
         vector<vector<pii> > g(n + 1);
        for (const auto& t : times) {
            g[t[0]].emplace_back(t[1], t[2]);
        }
        const int inf = 1e9;
        vector<int> dist(n + 1, inf);
		vector<bool> vis(n + 1, false);
        dist[k] = 0;
        priority_queue<pii, vector<pii>, greater<pii> > pq;
        pq.emplace(0, k);
        int u, v, w;
        while (!pq.empty()) {
            u = pq.top().second; pq.pop();
			if (vis[u]) continue;
			vis[u] = true;
            for (auto& to : g[u]) {
                v = to.first, w = to.second;
                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.emplace(dist[v], v);
                }
            }
        }
        int ans = *max_element(dist.begin() + 1, dist.end());
        return ans == inf ? -1 : ans;
        
    }
};
