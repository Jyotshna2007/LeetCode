class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int s;
        sort(nums.begin(),nums.end());
        for(int i=n;i>=0;i--){
      cnt++;
      if(cnt==k){
        s=nums[i-1];
      }
        }
        return s;
    }
};