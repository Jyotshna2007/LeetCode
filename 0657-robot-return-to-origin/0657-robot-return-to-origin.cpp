class Solution {
public:
    bool judgeCircle(string moves) {
        int chum=0,pum=0,num=0,tum=0;
        for(char ch:moves){
            if(ch=='U') chum++;
            else if(ch=='L') pum++;
            else if(ch=='D') num++;
            else if(ch=='R') tum++;
        }
        int s=chum-num;
        int p=pum-tum;
        return (s==0 && p==0);
    }
};