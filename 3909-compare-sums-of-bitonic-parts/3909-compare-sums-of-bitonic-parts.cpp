class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        int p = max_element(nums.begin(), nums.end()) - nums.begin();
        long long sum = 0, res = 0;
        for (int i = 0; i <= p; i++) {
            sum += nums[i];
        }
        for (int i = p; i < n; i++) {
            res += nums[i];
        }
        if (sum > res)
            return 0;
        else if (sum < res)
            return 1;
        else
            return -1;
    }
};