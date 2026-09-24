class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int s=nums[i],sum=0;
            while(s){
                sum+=s%10;
                s/=10;
            }
            if(sum==i){
               return i;
            }
        }
        return -1;
    }
};