class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int v=0,p=0;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) v+=nums[i];
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) p+=nums[i];
        }
    return p-v;
    }
};