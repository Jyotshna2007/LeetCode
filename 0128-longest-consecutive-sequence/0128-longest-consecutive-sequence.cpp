class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     set<int>s(nums.begin(),nums.end());
     vector<int>p(s.begin(),s.end());
     if(nums.size()==0) return 0;
     int ans=1;
     int res=1;
     for(int i=1;i<p.size();i++){
        if(p[i]==p[i-1]+1){
            ans++;
            res=max(ans,res);
        }
        else ans=1;
     }
     return res;
    }
};