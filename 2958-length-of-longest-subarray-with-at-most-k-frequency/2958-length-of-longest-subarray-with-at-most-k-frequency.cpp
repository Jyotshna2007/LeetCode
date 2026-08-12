class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> s;
        int start = 0;
        int ans = 0;
        for (int end = 0; end < nums.size(); end++) {
            s[nums[end]]++;
            while (s[nums[end]] > k) {
                s[nums[end]]--;
                start++;
            }
            ans = max(ans, end - start + 1);
        }
        return ans;
    }
};