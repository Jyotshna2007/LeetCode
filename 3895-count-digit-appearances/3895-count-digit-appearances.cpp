class Solution {
public:
    int d;
    int rep(int n) {
        int cnt = 0;
        while (n) {
            int r = n % 10;
            if (r == d)
                cnt++;
            n /= 10;
        }
        return cnt;
    }
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans = 0;
        d = digit;
        for (int i = 0; i < nums.size(); i++) {
            ans += rep(nums[i]);
        }
        return ans;
    }
};