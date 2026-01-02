class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        int q=n/2;
        int f[1000000]={0};
        for(int i=0;i<n;i++){
            f[nums[i]]++;
        }
        int res;
        for(int i=0;i<n;i++){
            if(f[nums[i]]==q){
                res=nums[i];
            }
        }
        return res;
    }
};