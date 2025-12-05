class Solution {
public:
    int countPartitions(vector<int>& nums) {
      int cnt=0,s=0,r=0,t=0;
      int n=nums.size();
      for(int i=0;i<n;i++){
        t+=nums[i];
      }  
      for(int i=0;i<n-1;i++){
        s+=nums[i];
        r=t-s;
        if(s%2==r%2){
            cnt++;
        }
      }
      return cnt;
    }
};