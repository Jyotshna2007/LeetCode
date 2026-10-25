class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long cnt=0;
        int start=0;
        int sub=0;
        for(int end=0;end<nums.size();end++){
           if(nums[end]<minK || nums[end]>maxK) start=0;
           else{
            start++;
            cnt+=start;
           }
        }
        return cnt;
    }
};