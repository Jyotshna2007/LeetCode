class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>chum(nums.size(),-1);
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            for(int j=1;j<num;j++){
                int s=j|j+1;
                if(s==num){
                   chum[i]=j;
                    break;
                }
            }
        }
       return chum;
    }
};