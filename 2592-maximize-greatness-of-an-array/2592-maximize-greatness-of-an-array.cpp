class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
      sort(nums.begin(),nums.end()); // 1 1 1 2 3 3 5
      int i=0,j=0,cnt=0,n=nums.size();
      while(i<n && j<n){
        if(nums[j]>nums[i]){
            i++;
            j++;
            cnt++;
        }
        else j++;
      }
      return cnt;
    }
};