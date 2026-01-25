class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if (n <= 1 || k == 1) {
            return 0;
        }
        int max = 999999;
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= n - k; i++) {
            if (nums[i + k - 1] - nums[i] < max) {
                max = nums[i + k - 1] - nums[i];
            }
        }
        return max;
    }
};