class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int>p;
        int cnt=0,start=0;
        for(int end=0;end<s.size();end++){
            p[s[end]]++;
            while(p['a']>=1 && p['b']>=1 && p['c']>=1){
                cnt+=s.size()-end;
                p[s[start]]--;
                start++;
            }
        }
        return cnt;
    }
};