class Solution {
public:
    int numSteps(string s) {
        int n = 0;
        for (char c : s) {
            n = n * 2 + (c - '0');
        }
        int cnt = 0;
        while (n != 1) {
            if (n % 2 == 1)
                n += 1;
            else
                n = n / 2;
            cnt++;
        }
        return cnt;
    }
};