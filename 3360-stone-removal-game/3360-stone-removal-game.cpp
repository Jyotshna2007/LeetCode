class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int s=10;
        int moves=0;
        while(n>=s){
            n-=s;
            s--;
            moves++;
        }
        return moves%2==1;
    }
};