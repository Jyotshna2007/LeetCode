class Solution {
public:
    int longestBalanced(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> p;
            for (int j = i; j < s.size(); j++) {
                p[s[j]]++;
                int maxi = 0, mini = INT_MAX;
                for (auto& i : p) {
                    mini = min(i.second, mini);
                    maxi = max(maxi, i.second);
                }
                if (mini == maxi) {
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};