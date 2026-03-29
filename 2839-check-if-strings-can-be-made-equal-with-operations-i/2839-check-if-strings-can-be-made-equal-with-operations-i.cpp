class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if (s1 == s2)
            return true;
        string s = s1;
        swap(s[0], s[2]);
        if (s == s2)
            return true;
        s = s1;
        swap(s[1], s[3]);
        if (s == s2)
            return true;
        s = s1;
        swap(s[0], s[2]);
        swap(s[1], s[3]);
        if (s == s2)
            return true;
        return false;
    }
};