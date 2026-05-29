class Solution {
public:
    int dsum(int n) {
        int sum = 0;
        while (n) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        vector<int> ans;
        for (auto i : nums) {
            ans.push_back(dsum(i));
        }
        int res=*min_element(ans.begin(),ans.end());
        return res;
    }
};