class Solution {
public:
    int isrev(int n) {
        int o = n, ans = 0;
        while (o) {
            int r = o % 10;
            ans = ans * 10 + r;
            o /= 10;
        }
        return ans;
    }
    int mirrorDistance(int n) {
        int s = n;
        int q = isrev(s);
        return abs(q - n);
    }
};