class Solution {
public:
    int minimumDeletions(string s) {
        int p = 0, d = 0;
        for (auto i : s) {
            if (i == 'b')
                p++;
            else
                d = min(p, d + 1);
        }
        return d;
    }
};