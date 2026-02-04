class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int j = 0, res = 0;
        for (int i = 0; i < s.size(); i++) {
            while (seen.find(s[i]) != seen.end()) {
                seen.erase(s[j]);
                j++;
            }
            seen.insert(s[i]);
            res = max(res, i - j + 1);
        }
        return res;
    }
};