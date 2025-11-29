class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int chum=0;
        while(sum%k!=0){
            chum++;
            sum--;
        }
        return chum;
    }
};