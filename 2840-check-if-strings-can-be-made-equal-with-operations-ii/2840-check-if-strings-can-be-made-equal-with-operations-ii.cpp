class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<char> s, j, h;
        vector<char> p;
        for (int i = 0; i < s1.size(); i++) {
            if (i % 2 == 0)
                s.push_back(s1[i]);
            else
                h.push_back(s1[i]);
        }
        for (int i = 0; i < s2.size(); i++) {
            if (i % 2 == 0)
                p.push_back(s2[i]);
            else
                j.push_back(s2[i]);
        }
        sort(s.begin(), s.end());
        sort(p.begin(), p.end());
        sort(h.begin(), h.end());
        sort(j.begin(), j.end());
        return s == p && h == j;
    }
};