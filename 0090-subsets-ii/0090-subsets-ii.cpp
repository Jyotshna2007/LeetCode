class Solution {
public:
    void solve(vector<int>& nums, vector<int>& curr, vector<vector<int>>& ans,
               int i) {
        ans.push_back(curr);
        if (i == nums.size())
            return;
        for (int j = i; j < nums.size(); j++) {
            curr.push_back(nums[j]);
            solve(nums, curr, ans, j + 1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans, ans1;
        vector<int> curr;
        solve(nums, curr, ans, 0);
        set<vector<int>> s(ans.begin(), ans.end());
        for (auto& i : s) {
            ans1.push_back(i);
        }
        return ans1;
    }
};