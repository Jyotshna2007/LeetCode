class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;
        vector<char> prime(n, true);
        //  prime[0] = false;
        // prime[1] = false;
        int cnt = n / 2;
        for (int i = 3; i * i < n; i += 2) {
            if (prime[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    if (prime[j]) {
                        prime[j] = false;
                        cnt--;
                    }
                }
            }
        }

        return cnt;
    }
};