class Solution {
public:
    bool checkOnesSegment(string s) {
        int f = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                f = 1;
            }
            if (f == 1 && s[i] == '1')
                return false;
        }
        return true;
    }
};