class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int cnt=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                if(cnt==-1) cnt=nums[i];
                else cnt&=nums[i];
            }
        }
        if(cnt==-1) return 0;
        else return cnt;
    }
};