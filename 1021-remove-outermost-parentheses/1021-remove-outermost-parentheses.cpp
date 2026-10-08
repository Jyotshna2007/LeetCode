class Solution {
public:
    string removeOuterParentheses(string s) {
        string res = "";
        stack<char> st;
        for (auto i : s) {
            if (i == '(') {
                if (!st.empty())
                    res += i;
                st.push(i);
            } else {
                st.pop();
                if (!st.empty())
                    res += i;
            }
        }
        return res;
    }
};