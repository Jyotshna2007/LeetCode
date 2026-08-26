class Solution {
public:
bool isprime(int n){
    if(n==0 || n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int ispalindrome(int n){
    string s=to_string(n);
    string rev=s;
    reverse(rev.begin(),rev.end());
    return stoi(s+rev.substr(1));
}
    int primePalindrome(int n) {
        if(n<=2) return 2;
        if(n<=3) return 3;
        if(n<=5) return 5;
        if(n<=7) return 7;
        if(n<=11) return 11;
        for(int i=10;;i++){
            int p=ispalindrome(i);
            if(p>=n && isprime(p)) return p;
        }
    }
};