class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n=nums.size();
        vector<int>p;
        for(int i=0;i<n;i++){
            p.push_back(nums[i]);
        }
        reverse(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            p.push_back(nums[i]);
        }
        return p;
    }
};