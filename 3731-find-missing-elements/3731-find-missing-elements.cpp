class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int s = *min_element(nums.begin(), nums.end());
        int p = *max_element(nums.begin(), nums.end());
        vector<int> h;
        unordered_set<int> ans(nums.begin(), nums.end());
        for (int i = s; i <= p; i++) {
            if (ans.find(i) == ans.end())
                h.push_back(i);
        }
        return h;
    }
};