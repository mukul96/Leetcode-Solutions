class Solution {
public:
   int parent(vector<int> &p, int x) {return p[x]==-1 ? x : parent(p, p[x]);}
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        int es = edges.size();
        vector<int> p(es+1, -1);
        vector<int> res(2,-1);
        for(int i=0; i<es; i++)
        {
            int u = edges[i][0], v = edges[i][1];
            int u_par = parent(p,u), v_par = parent(p,v);
            if(u_par!=v_par) p[v_par] = u_par;
            else res = edges[i];
        }
        return res;
    }
};
