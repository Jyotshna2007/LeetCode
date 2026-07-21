class Solution {
public:
    void solve(vector<int>& nums, vector<int>& curr, int i,
               vector<vector<int>>& ans, vector<int>& vis) {
        if (i == nums.size()) {
            ans.push_back(curr);
            return;
        }
        for (int j = 0; j < nums.size(); j++) {
            if (vis[j])
                continue;
            vis[j] = 1;
            curr.push_back(nums[j]);
            solve(nums, curr, i + 1, ans, vis);
            curr.pop_back();
            vis[j] = 0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        vector<int> vis(nums.size(), 0);
        solve(nums, curr, 0, ans, vis);
        return ans;
    }
};