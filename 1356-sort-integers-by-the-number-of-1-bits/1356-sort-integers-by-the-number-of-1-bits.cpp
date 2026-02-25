class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int, int>> p;
        for (int i = 0; i < arr.size(); i++) {
            int s = arr[i], cnt = 0;
            while (s) {
                int r = s % 2;
                if (r == 1)
                    cnt++;
                s = s / 2;
            }
            p.push_back({cnt, arr[i]});
        }
        vector<int> v;
        sort(p.begin(), p.end());
        for (auto i : p) {
            v.push_back(i.second);
        }
        return v;
    }
};