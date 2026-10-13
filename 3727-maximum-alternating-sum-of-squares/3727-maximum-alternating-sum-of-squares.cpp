class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0) nums[i]=-nums[i];
        }
        sort(nums.rbegin(),nums.rend());
        long long res=0;
        for(int i=0;i<(n+1)/2;i++){
            res+=nums[i]*nums[i];
        }
        for(int i=(n+1)/2;i<n;i++){
            res-=nums[i]*nums[i];
        }
        return res;
    }
};