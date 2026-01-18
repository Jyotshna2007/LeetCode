class Solution {
public:
    int vowelConsonantScore(string s) {
        int cnt=0,con=0;
        for(char c:s){
            if(c>='a' && c<='z'){
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') cnt++;
            else con++;
            }
        }
        if(con>0) return floor(cnt/con);
        else return 0;
    }
};