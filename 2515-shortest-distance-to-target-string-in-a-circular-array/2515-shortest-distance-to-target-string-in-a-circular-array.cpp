class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX, n = words.size();
        for (int i = 0; i < words.size(); i++) {
            if (words[i] == target) {
                int d = abs(i - startIndex);
                ans = min(ans, min(d, n - d));
            }
        }
        if (ans == INT_MAX)
            return -1;
        return ans;
    }
};