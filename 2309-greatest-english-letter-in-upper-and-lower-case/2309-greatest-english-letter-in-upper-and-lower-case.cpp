class Solution {
public:
    string greatestLetter(string s) {
        vector<int> lo(26, -1);
        vector<int> up(26, -1);
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c >= 'a' && c <= 'z') {
                lo[c - 'a'] = 1;
            } else {
                up[c - 'A'] = 1;
            }
        }
        string ans = "";
        for (int i = 25; i >= 0; i--) {
            if (lo[i] == 1 && up[i] == 1) {
                ans = char('A' + i);
                break;
            }
        }
        return ans;
    }
};