class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        sort(strs.begin(), strs.end());
        string a = strs.front(), b = strs.back();
        string s = "";
        for (int i = 0; i < min(a.size(), b.size()) && a[i] == b[i]; i++) {
            s += a[i];
        }
        return s;
    }
};