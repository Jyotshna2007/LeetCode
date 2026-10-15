class Solution {
public:
    int sumCounts(vector<int>& nums) {
       int res=0,cnt=0;
       for(int i=0;i<nums.size();i++){
        unordered_map<int,int>f;
        cnt=0;
        for(int j=i;j<nums.size();j++){
            f[nums[j]]++;
            if(f[nums[j]]==1) cnt++;
            res+=cnt*cnt;
        }
       } 
       return res;
    }
};