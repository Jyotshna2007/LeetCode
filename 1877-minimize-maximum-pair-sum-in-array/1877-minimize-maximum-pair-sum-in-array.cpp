class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>chum;
        int n=nums.size();
        for(int i=0;i<n;i++){
            chum.push_back(nums[i]+nums[n-i-1]);
        }
        long long s=*max_element(chum.begin(),chum.end());
        return s;

    }
};