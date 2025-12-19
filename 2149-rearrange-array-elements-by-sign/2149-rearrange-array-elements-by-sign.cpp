class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>res;
        vector<int>opp;
        vector<int>ans;
        for(int num:nums){
            if(num>0){
                res.push_back(num);
            }
            else if(num<0){
                opp.push_back(num);
            }
        }
        for(int i=0;i<opp.size();i++){
            ans.push_back(res[i]);
            ans.push_back(opp[i]);
        }
        return ans;
    }
};