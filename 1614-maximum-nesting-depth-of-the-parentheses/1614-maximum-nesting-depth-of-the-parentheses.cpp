class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int maxcnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cnt++;
            }
            if(s[i]==')'){
                cnt--;
            }
            maxcnt=max(maxcnt,cnt);
        }
        return maxcnt;
    }
};