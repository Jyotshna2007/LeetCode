class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
     int n=nums.size();
     vector<int>s;
     for(int i=0;i<n;i++){
        if(nums[i]==1) s.push_back(i);
     }
     if(s.size()==0) return true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i+1]-s[i]<=k) return false;
        } 
       return true;
    }
};