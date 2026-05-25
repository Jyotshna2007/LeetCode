class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> n;
        unordered_map<string, char> m;
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word) {
            words.push_back(word);
        }
        if (words.size() != pattern.size())
            return false;
        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string d = words[i];
            if (n.count(c) && n[c] != d)
                return false;
            if (m.count(d) && m[d] != c)
                return false;
            n[c] = d;
            m[d] = c;
        }
        return true;
    }
};