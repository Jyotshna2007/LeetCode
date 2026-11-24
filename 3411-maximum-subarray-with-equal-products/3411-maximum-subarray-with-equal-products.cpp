class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            long long gc = nums[i], lc = nums[i], pro = 1, maxlcm = 1000000000;
            for (int j = i; j < n; j++) {
                pro = (long long)pro * nums[j];
                if (pro > maxlcm)
                    break;
                gc = gcd(gc, nums[j]);
                lc = lcm(lc, nums[j]);
                if (pro == (long long)gc * lc) {
                    int len = j - i + 1;
                    maxi = max(maxi, len);
                }
            }
        }
        return maxi;
    }
};