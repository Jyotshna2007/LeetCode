class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res;
        for (int i = 0; i <= n; i++) {
            int s = i, cnt = 0;
            while (s) {
                int r = s % 2;
                if (r == 1)
                    cnt++;
                s = s / 2;
            }
            res.push_back(cnt);
        }
        return res;
    }
};