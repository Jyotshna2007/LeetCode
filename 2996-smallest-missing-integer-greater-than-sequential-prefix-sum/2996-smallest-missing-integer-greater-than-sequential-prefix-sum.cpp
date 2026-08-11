class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int sum = nums[0];
        // int pre = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1] + 1)
                sum += nums[i];
            else {
                break;
            }
        }
        // sum = max(sum, pre);
        while (find(nums.begin(), nums.end(), sum) != nums.end()) {
            sum++;
        }
        return sum;
    }
};