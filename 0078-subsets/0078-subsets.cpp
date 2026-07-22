class Solution {
public:
void solve(vector<int>&nums,vector<vector<int>>&res,vector<int>&curr,int i){
        res.push_back(curr);
    if(i==nums.size()){
        return ;
    }
    for(int j=i;j<nums.size();j++){
        curr.push_back(nums[j]);
        solve(nums,res,curr,j+1);
        curr.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>res;
        vector<int>curr;
        solve(nums,res,curr,0);
        return res;
    }
};