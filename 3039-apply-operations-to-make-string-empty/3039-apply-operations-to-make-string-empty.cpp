class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char, int> p;
        for (char c : s)
            p[c]++;
        int ans = INT_MIN;
        for (auto i : p)
            ans = max(ans, i.second);
        string res = "";
        for (int i = s.size() - 1; i >= 0; i--) {
            if (p[s[i]] == ans) {
                res += s[i];
                p[s[i]] = 0;
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};