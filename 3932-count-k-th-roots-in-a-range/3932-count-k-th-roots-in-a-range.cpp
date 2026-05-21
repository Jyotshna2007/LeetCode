class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        int cnt=0;
        long long i=0;
        if(k==1) return r-l+1;
       while(pow(i,k)<=r){
        long long h=pow(i,k);
        if(h>=l && h<=r) cnt++;
        i++;
       }
       return cnt;
    }
};