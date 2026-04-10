class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int res = INT_MAX;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                for (int k = j + 1; k < nums.size(); k++) {
                    if (nums[i] == nums[j] && nums[j] == nums[k]) {
                        ans = abs(i - j) + abs(j - k) + abs(i - k);
                        res = min(res, ans);
                    }
                }
            }
        }
        if (res == INT_MAX)
            return -1;
        return res;
    }
};