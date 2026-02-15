class Solution {
public:
    string addBinary(string a, string b) {
        int d=0;
        for(char c:a){
            d=d*2+(c-'0');
        }
        int f=0;
        for(char h:b){
            f=f*2+(h-'0');
        }
        long long sum=f+d;
        long long x=sum;
        string s="";
        while(x){
        s+=(x%2)+'0';
        x=x/2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};