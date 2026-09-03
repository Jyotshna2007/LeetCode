class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int e = 0, o = 0;
        for (int i : nums1) {
            if (i % 2 == 0)
                e++;
            else
                o++;
        }
        int s = *min_element(nums1.begin(), nums1.end());
        if (s % 2 == 1 || e == n)
            return true;
        return false;
    }
};