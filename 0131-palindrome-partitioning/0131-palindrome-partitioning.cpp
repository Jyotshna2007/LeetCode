class Solution {
public:
    vector<vector<string>> ans;
    vector<string> curr;
    bool ispalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l <= r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    void solve(string& s, int i) {
        if (i == s.size()) {
            ans.push_back(curr);
            return;
        }
        for (int j = i; j < s.size(); j++) {
            string temp = s.substr(i, j - i + 1);
            if (ispalindrome(temp)) {
                curr.push_back(temp);
                solve(s, j + 1);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        solve(s, 0);
        return ans;
    }
};