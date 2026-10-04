class Solution {
public:
    bool checkValidString(string s) {
        int j = 0, k = 0, d = 0;
        for (auto i : s) {
            if (i == '(')
                j++;
            else if (i == ')')
                k++;
            else
                d++;
            if (k > j + d)
                return false;
        }
        j = 0, k = 0, d = 0;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '(')
                j++;
            else if (s[i] == ')')
                k++;
            else
                d++;
            if (j > k + d)
                return false;
        }
        return true;
    }
};