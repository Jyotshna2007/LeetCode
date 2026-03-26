class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1 = 0, sum2 = 0, cnt1 = 0, cnt2 = 0;
        for (int i : nums1) {
            if (i == 0)
                cnt1++;
            sum1 += i;
        }
        for (int i : nums2) {
            if (i == 0)
                cnt2++;
            sum2 += i;
        }
        if ((cnt1 == 0 && sum1 < sum2 + cnt2) ||
            (cnt2 == 0 && sum2 < sum1 + cnt1) ||
            (cnt1 == 0 && cnt2 == 0 && sum1 != sum2)) {
            return -1;
        } else {
            if (sum1 + cnt1 < sum2 + cnt2) {
                return sum2 + (cnt2);
            } else
                return sum1 + (cnt1);
        }
    }
};