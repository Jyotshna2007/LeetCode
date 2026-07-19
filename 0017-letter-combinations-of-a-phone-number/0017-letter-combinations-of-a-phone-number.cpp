class Solution {
public:
    void solve(string& s, int i, string& curr, vector<string>& ans) {
        vector<string> mp = {" ",   " ",   "abc",  "def", "ghi",
                             "jkl", "mno", "pqrs", "tuv", "wxyz"};
        if (i == s.size()) {
            ans.push_back(curr);
            return;
        }
        string word = mp[s[i] - '0'];
        for (char ch : word) {
            curr.push_back(ch);
            solve(s, i + 1, curr, ans);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string curr = "";
        solve(digits, 0, curr, ans);
        return ans;
    }
};