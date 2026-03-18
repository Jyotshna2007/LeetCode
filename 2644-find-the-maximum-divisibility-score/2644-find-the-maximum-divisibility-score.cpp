class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int cnt = 0, max = 0, res = INT_MAX;
        for (int i = 0; i < divisors.size(); i++) {
            cnt = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] % divisors[i] == 0) {
                    cnt++;
                }
            }
            if (cnt > max || (cnt == max && divisors[i] < res)) {
                max = cnt;
                res = divisors[i];
            }
        }
        return res;
    }
};