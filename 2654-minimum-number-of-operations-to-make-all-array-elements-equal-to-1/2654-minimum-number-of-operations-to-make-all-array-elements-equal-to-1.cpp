class Solution {
public:
    int minOperations(vector<int>& nums) {
        vector<int>s;
       int o=0;
       for(auto i:nums){
        if(i==1) o++;
       }
       if(o>0) return nums.size()-o;
    int mini=INT_MAX;
    for(int i=0;i<nums.size();i++){
        int p=nums[i];
        for(int j=i+1;j<nums.size();j++){
            p=__gcd(p,nums[j]);
            if(p==1){
                mini=min(mini,j-i+1);
                break;
            }
        }
    }
    if(mini==INT_MAX) return -1;
    return (mini-1)+(nums.size()-1);

    }
};