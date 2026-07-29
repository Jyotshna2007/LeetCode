class Solution {
public:
    string solve(string s) {
        if (s.size() < 2)
            return "";
        unordered_set<char> st(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (st.count(tolower(c)) && st.count(toupper(c))) {
                continue;
            }
            string left = solve(s.substr(0, i));
            string right = solve(s.substr(i + 1));
            if (left.size() >= right.size())
                return left;
            else
                return right;
        }
        return s;
    }
    string longestNiceSubstring(string s) { return solve(s); }
};