class Solution {
public:
    int p;
    vector<string> ans;
    string s = "";
    void solve(string& s, int i) {
        if (i == p) {
            ans.push_back(s);
            return;
        }
        if (s.empty() or s.back() != '0') {
            s.push_back('0');
            solve(s, i + 1);
            s.pop_back();
        }
        s.push_back('1');
        solve(s, i + 1);
        s.pop_back();
    }
    vector<string> validStrings(int n) {
        p = n;
        solve(s, 0);
        return ans;
    }
};