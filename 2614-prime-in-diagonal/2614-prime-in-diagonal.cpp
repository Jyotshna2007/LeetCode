class Solution {
public:
    bool checkprime(int n) {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true; // 2 and 3 are prime

        if (n % 2 == 0 || n % 3 == 0) // eliminate multiples of 2 and 3 quickly
            return false;

        // Check divisors up to sqrt(n) using 6k ± 1 optimization
        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> s;
        for (int i = 0; i < n; i++) {
            s.push_back(nums[i][i]);
            if (i != n - 1 - i)
                s.push_back(nums[i][n - 1 - i]);
        }
        sort(s.begin(), s.end(), greater<int>());
        for (int i = 0; i < s.size(); i++) {
            if (checkprime(s[i]))
                return s[i];
        }
        return 0;
    }
};