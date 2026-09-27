class Solution {
public:
    string reverseParentheses(string s) {
        string st = "";
        for (char c : s) {
            if (c == ')') {
                string rev = "";
                while (!st.empty() && st.back() != '(') {
                    rev += st.back();
                    st.pop_back();
                }
                st.pop_back();
                st += rev;
            } else
                st += c;
        }
        return st;
    }
};