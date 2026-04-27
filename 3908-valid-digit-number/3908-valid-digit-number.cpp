class Solution {
public:
    bool validDigit(int n, int x) {
        vector<int> p;
        while (n>0) {
            p.push_back(n % 10);
            n /= 10;
        }
        if (p.size() < 2 )
            return false;
        bool ans = false;
        reverse(p.begin(), p.end());
        for (int i = 1; i < p.size(); i++) {
            if (p[i] == x) {
                ans = true;
                break;
            }
        }
        if (p[0] != x && ans == true)
            return true;
        else
            return false;
    }
};