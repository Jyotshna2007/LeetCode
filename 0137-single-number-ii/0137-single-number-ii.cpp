class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>f;
        for(int num:nums){
            f[num]++;
        }
        int res;
        for(int num:nums){
            if(f[num]==1){
                res=num;
            }
        }
        return res;
    }
};