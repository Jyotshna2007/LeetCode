class Solution {
public:
    bool isvalid(string curr) {
        int cnt = 0;
        for (auto c : curr) {
            if (c == '(')
                cnt++;
            else
                cnt--;
            if (cnt < 0)
                return false;
        }
        return cnt == 0;
    }
    void solve(vector<string>& ans, int n, string curr, int i) {
        if (curr.size() == 2 * n) {
            if (isvalid(curr)) {
                ans.push_back(curr);
            }
            return;
        }
        curr.push_back('(');
        solve(ans, n, curr, i + 1);
        curr.pop_back();
        curr.push_back(')');
        solve(ans, n, curr, i + 1);
        curr.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";
        vector<string> ans;
        solve(ans, n, curr, 0);
        return ans;
    }
};