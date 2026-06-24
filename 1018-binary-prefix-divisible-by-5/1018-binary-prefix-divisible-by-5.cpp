class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool>j;
        int s=0;
        for(int i:nums){
             s=(s*2+i)%5;
            j.push_back(s==0);
        }
        return j;
    }
};