class LUPrefix {
   public:
    set<int> s;
    int t = 0;
    LUPrefix(int n) {
    }

    void upload(int video) {
        s.emplace(video);
    }

    int longest() {
        while (s.count(t + 1)) {
            t++;
        }
        return t;
    }
};
