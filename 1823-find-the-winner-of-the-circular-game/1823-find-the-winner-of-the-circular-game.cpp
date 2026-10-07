class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> b;
        for (int i = 1; i <= n; i++) {
            b.push_back(i);
        }
        int t = 0;
        while (b.size() > 1) {
            t = (t + k - 1) % b.size();
            b.erase(b.begin() + t);
        }

        return b[0];
    }
};