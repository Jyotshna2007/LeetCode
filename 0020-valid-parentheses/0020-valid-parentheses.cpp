class Solution {
public:
    bool isValid(string s) {
        stack<char> chum;
        unordered_map<char, char> map = {{')', '('}, {']', '['}, {'}', '{'}};
        for (char c : s) {
            if (map.find(c) == map.end()) {
                chum.push(c);
            } else if (!chum.empty() && map[c] == chum.top()) {
                chum.pop();
            } else {
                return false;
            }
        }
        return chum.empty();
    }
};