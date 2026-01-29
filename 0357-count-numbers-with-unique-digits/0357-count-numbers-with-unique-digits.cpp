class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        if(n==1) return 10;
        int b=9;
        int o=9;
        int res=9;
        for(int i=2;i<=n;i++){
     b=b*o;
     res+=b;
     o--;
        }
        return res+1;
    }
};