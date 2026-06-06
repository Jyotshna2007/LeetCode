class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> res, ans;
        res.push_back(0);
        ans.push_back(0);
        int n = nums.size();
        for (int i = 1; i < nums.size(); i++) {
            res.push_back(nums[i - 1] + res[i - 1]);
        }
        for (int i = nums.size() - 1; i >= 1; i--) {
            ans.push_back(nums[i] + ans[n - i - 1]);
        }
        reverse(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            ans[i] = abs(ans[i] - res[i]);
        }
        return ans;
    }
};