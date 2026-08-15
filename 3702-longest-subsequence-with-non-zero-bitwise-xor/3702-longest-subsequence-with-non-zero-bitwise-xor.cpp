class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int need=0,cnt=0;
        for(int x:nums){
            need^=x;
            if(x==0) cnt++;
        }
        if(need!=0) return nums.size();
        else if(cnt==nums.size()) return 0;
        else return nums.size()-1;
    }
};