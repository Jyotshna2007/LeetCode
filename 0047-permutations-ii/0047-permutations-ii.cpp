class Solution {
public:
    void solve(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr,
               int i, vector<int>& vis) {
        if (i == nums.size()) {
            ans.push_back(curr);
            return;
        }
        for (int j = 0; j < nums.size(); j++) {
            if (vis[j])
                continue;
            vis[j] = 1;
            curr.push_back(nums[j]);
            solve(nums, ans, curr, i + 1, vis);
            curr.pop_back();
            vis[j] = 0;
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans, ans1;
        vector<int> curr;
        vector<int> vis(nums.size(), 0);
        solve(nums, ans, curr, 0, vis);
        set<vector<int>> s(ans.begin(), ans.end());
        for (auto& i : s) {
            ans1.push_back(i);
        }
        return ans1;
    }
};