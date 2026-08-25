class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> h;
        for (int i : nums) {
            h[i]++;
        }
        int ans = k;
        while (1) {
            if (!h.count(ans))
                return ans;
            ans += k;
        }
    }
};