class Solution {
public:
    int minMoves(vector<int>& nums) {
     int n=*min_element(nums.begin(),nums.end());
     int a=0;
     for(int num:nums){
        a+=(num-n);
     }
     return a;
    }
};