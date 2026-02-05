class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                res[i]=0;
            }
            else{
                int s=nums[i];
                int m=(i+s)%n;
                if(m<0) m+=n;
                res[i]=nums[m];
            }
        }
        return res;
    }
};