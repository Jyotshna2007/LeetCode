class Solution {
public:
    void solve(string& s, vector<string>& ans, string& curr, int i) {
        if (i == s.size()) {
            ans.push_back(curr);
            return;
        }
        if (isalpha(s[i])) {
            curr.push_back(toupper(s[i]));
            solve(s, ans, curr, i + 1);
            curr.pop_back();

            curr.push_back(tolower(s[i]));
            solve(s, ans, curr, i + 1);
            curr.pop_back();
        } else {
            curr.push_back(s[i]);
            solve(s, ans, curr, i + 1);
            curr.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string curr = "";
        solve(s, ans, curr, 0);
        return ans;
    }
};