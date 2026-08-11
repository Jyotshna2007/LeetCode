class Solution {
public:
    const int maxi = 1e5 + 1;
    vector<int> spf;
    void sieve() {
        spf.resize(maxi);
        for (int i = 0; i < maxi; i++) {
            spf[i] = i;
        }
        for (int i = 2; i * i < maxi; i++) {
            if (spf[i] == i) {
                for (int j = i * i; j < maxi; j += i) {
                    if (spf[j] == j)
                        spf[j] = i;
                }
            }
        }
    }
    int smallestValue(int n) {
        sieve();
        while (spf[n] != n) {
            unordered_map<int, int> s;
            int p = n;
            // if not map sum=0  in loop do sum+=spf[p]
            while (p > 1) {
                s[spf[p]]++;
                p /= spf[p];
            }
            int sum = 0;
            for (auto i : s) {
                sum += i.first * i.second;
            }
            if (sum == n)
                break;
            n = sum;
        }
        return n;
    }
};