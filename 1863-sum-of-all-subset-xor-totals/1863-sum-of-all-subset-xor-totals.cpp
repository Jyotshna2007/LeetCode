class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int xor1 = 0;
        for (int i : nums)
            xor1 |= i;
        return xor1 << (nums.size() - 1);
    }
};