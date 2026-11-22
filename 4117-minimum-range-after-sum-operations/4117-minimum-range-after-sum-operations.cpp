class Solution {
public:
    int minRange(int a, int b, int c) {
        if(a==b && b==c) return 0;
        vector<int>s={a,b,c};
        sort(s.begin(),s.end());
        return min(s[2]-s[0],s[1]);
    }
};