class Solution {
public:
    void solve(int s, int k, vector<vector<int>>& ans, vector<int>& p, int n) {
        if (p.size() == k) {
            ans.push_back(p);
            return;
        }
        for (int i = s; i <= n; i++) {
            p.push_back(i);
            solve(i + 1, k, ans, p, n);
            p.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> p;
        // vector<int>vis(n,0);
        solve(1, k, ans, p, n);
        return ans;
    }
};