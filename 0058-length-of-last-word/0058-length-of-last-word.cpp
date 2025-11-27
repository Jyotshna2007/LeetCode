class Solution {
public:
    int lengthOfLastWord(string s) {
        int j=s.size();
        int cnt=0,f=0;
        for(int i=j-1;i>=0;i--){
            if(s[i]==' ' && f) break;
            if(s[i]!=' '){
                f=1;
                cnt++;
            }
        }
        return cnt;
    }
};