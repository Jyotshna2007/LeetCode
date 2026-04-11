class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<pair<int, int>> p;
        for (int i = 0; i < nums.size(); i++) {
            p.push_back({nums[i], i});
        }
        int mini = INT_MAX;
        if (p.size() < 3)
            return -1;
        sort(p.begin(), p.end());
        for (int i = 0; i < p.size() - 2; i++) {
            if (p[i].first == p[i + 1].first &&
                p[i + 1].first == p[i + 2].first) {
                int sum = abs(p[i].second - p[i + 1].second) +
                          abs(p[i + 1].second - p[i + 2].second) +
                          abs(p[i + 2].second - (p[i].second));
                mini = min(mini, sum);
            }
        }
        if (mini == INT_MAX)
            return -1;
        return mini;
    }
};
