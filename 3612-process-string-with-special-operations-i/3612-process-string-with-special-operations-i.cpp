class Solution {
public:
    string processStr(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&& s[i]<='z') res+=s[i];
            else if(s[i]=='*'){
                if(!res.empty()) res.pop_back();
            }
            else if(s[i]=='#') res+=res;
            else reverse(res.begin(),res.end());
        }
        return res;
    }
};