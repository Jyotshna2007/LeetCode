class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());
        int maxi = *max_element(nums.begin(), nums.end());
        int mini1 = 0, maxi1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == mini)
                mini1 = i;
            if (nums[i] == maxi)
                maxi1 = i;
        }
        if (mini1 == maxi1)
            return 1;
        int front = max(mini1, maxi1) + 1;
        int back = nums.size() - min(mini1, maxi1);
        int both = min(mini1 + 1 + nums.size() - maxi1,
                       maxi1 + 1 + nums.size() - mini1);
        return min({front, back, both});
    }
};