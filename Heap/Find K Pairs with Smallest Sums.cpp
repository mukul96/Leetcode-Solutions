class Solution {
private:
    struct mycompare{
        bool operator()(pair<int, int>& p1, pair<int, int>& p2){
            return p1.first + p1.second < p2.first + p2.second;
        }
    };
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> res;
        priority_queue<pair<int,int>, vector<pair<int, int> >, mycompare> pq;
        for(int i = 0; i < min((int)nums1.size(), k); i++){
            for(int j = 0; j < min((int)nums2.size(), k); j++){
                if(pq.size() < k)
                    pq.push(make_pair(nums1[i], nums2[j]));
                else if(nums1[i] + nums2[j] < pq.top().first + pq.top().second){
                    pq.push(make_pair(nums1[i], nums2[j]));
                    pq.pop();
                }
            }
        }
        //return res;
        while(!pq.empty()){
            vector<int> a;
            int x=(pq.top()).first;
            int y=(pq.top()).second;
            a.push_back(x);
            a.push_back(y);
            res.push_back(a);
            pq.pop();
        }
        return res;
    }
};
