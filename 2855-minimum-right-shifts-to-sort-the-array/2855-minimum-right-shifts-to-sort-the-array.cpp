class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int min = -1, cnt = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                min = i;
                cnt++;
            }
        }
        if (min == -1)
            return 0;
        if (cnt > 1 || nums[0] < nums[n - 1])
            return -1;
        return n - min;
    }
};