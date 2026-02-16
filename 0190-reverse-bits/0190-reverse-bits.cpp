class Solution {
public:
    int reverseBits(int n) {
        string s;
        int x = 32;
        while (x) {
            int rem = n % 2;
            s.push_back(rem + '0');
            n = n / 2;
            x--;
        }
        long long ans = 0;
        int j = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1')
                ans += pow(2, j);
            j++;
        }
        return ans;
    }
};