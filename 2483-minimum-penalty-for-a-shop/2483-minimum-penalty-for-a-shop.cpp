class Solution {
public:
    int bestClosingTime(string c) {
       // for()
       int y=0,n=0;
       for(char i:c){
        if(i=='Y') y++;
        else n++;
       }
       if(y==c.size()) return c.size();
       if(n==c.size()) return 0;
       n=0;
       int pen=y,ans=0;
       for(int i=0;i<c.size();i++){
        if(c[i]=='Y') y--;
        if(c[i]=='N') n++;
        int cur=y+n;
         if(cur<pen){
            pen=cur;
            ans=i+1;
         }
       }
       return ans;
    }
};