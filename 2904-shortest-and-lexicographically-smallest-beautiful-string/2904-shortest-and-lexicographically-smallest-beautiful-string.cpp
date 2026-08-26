class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        for(int right=0;right<s.size();right++){
            int cnt=0;
            for(int j=right;j<s.size();j++){
                if(s[j]=='1'){
                    cnt++;
                }
                if(cnt==k){
                    string p=s.substr(right,j-right+1);
                    if(ans=="" || p.size()<ans.size()||(p.size()==ans.size() && p<ans)){
                        ans=p;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};