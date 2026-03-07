class Solution {
public:
    int minFlips(string s) {
        // even po 1-2,odd 1
        // even po 0-1,odd-2
        // even po 1-2,odd-1
        // even po 0-0,odd-1
        int e1 = 0, o1 = 0, e0 = 0, o0 = 0;
        string p = s + s;
        int n = s.size(), res = INT_MAX;
        for (int i = 0; i < p.size(); i++) {
            if (i % 2 == 0) {
                if (p[i] == '0')
                    e0++;
                else
                    e1++;
            } else {
                if (p[i] == '0')
                    o0++;
                else
                    o1++;
            }
            if (i >= n) {
                int j = i - n;
                if (j % 2 == 0) {
                    if (p[i] == '0')
                        e0--;
                    else
                        e1--;
                } else {
                    if (p[i] == '0')
                        o0--;
                    else
                        o1--;
                }
            }
            if (i >= n - 1) {
                int r = e1 + o0;
                int ans = e0 + o1;
                res = min(res, min(r, ans));
            }
        }
        return res;
    }
};