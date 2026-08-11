class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       int ans=0;
       for(auto i:nums) ans^=i;
       long long bit= (long long)ans & (-(long long)ans);
       int a=0,b=0;
       for(int i:nums){
        if(i&bit){
            a^=i;
        }
        else b^=i;
       }
       return {a,b};
    }
};