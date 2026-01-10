class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
       int s=nums[0];
        for(int i=0;i<n;i++){
    if(i>s) return false;
    s=max(s,i+nums[i]);
    if(s>=n-1)return true;
        }
        return false;
    }
};