class Solution {
public:
    const int maxi = 1e5 + 1;
    vector<int> spf;
    void arr() {
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
    int distinctPrimeFactors(vector<int>& nums) {
        arr();
        unordered_map<int, int> s;
        for (int i = 0; i < nums.size(); i++) {
            int j = nums[i];
            while (j > 1) {
                int p = spf[j];
                s[p]++;
                j /= p;
            }
        }
        return s.size();
    }
};