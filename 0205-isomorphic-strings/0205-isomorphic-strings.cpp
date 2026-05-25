class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> mp1, mp2;
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            char d = t[i];
            if (mp1.count(c) && mp1[c] != d)
                return false;
            if (mp2.count(d) && mp2[d] != c)
                return false;
            mp1[c] = d;
            mp2[d] = c;
        }
        return true;
    }
};