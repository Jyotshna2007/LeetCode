class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        int n=start^goal;
        while(n){
            if(n%2==1) cnt++;
            n/=2;
        }
        return cnt;
    }
};