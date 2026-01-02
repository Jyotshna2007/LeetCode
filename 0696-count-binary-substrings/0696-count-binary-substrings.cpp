class Solution {
public:
    int countBinarySubstrings(string s) {
          vector<int>res;
        res.push_back(1);
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]) res.push_back(1);
            else res.back()++;
        }
        int ans=0;
        for(int i=0;i<res.size()-1;i++){
            ans+=min(res[i],res[i+1]);
        }
        return ans;
    }
};