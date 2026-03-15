class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = INT_MIN;
        vector<long long> p;
        for (int i = 0; i < nums.size(); i++) {
            int s = nums[i];
            maxi = max(s, maxi);
            int q = __gcd(nums[i], maxi);
            p.push_back(q);
        }
        sort(p.begin(), p.end());
        long long h = p.size();
        long long sum = 0;
        for (int i = 0; i < p.size() / 2; i++) {
            int q = __gcd(p[i], p[h - i - 1]);
            sum += q;
        }
        return sum;
    }
};