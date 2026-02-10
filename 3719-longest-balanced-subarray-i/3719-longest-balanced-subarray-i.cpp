class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            unordered_set<int> s;
            unordered_set<int> o;
            for (int j = i; j < n; j++) {
                if (nums[j] % 2 == 0)
                    s.insert(nums[j]);
                else
                    o.insert(nums[j]);
                if (s.size() == o.size())
                    maxi = max(maxi, j - i + 1);
            }
        }
        return maxi;
    }
};