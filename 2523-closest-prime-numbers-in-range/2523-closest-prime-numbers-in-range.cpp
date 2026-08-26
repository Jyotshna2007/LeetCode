class Solution {
public:
int isprime(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0) return false;
    }
    return true;
}
    vector<int> closestPrimes(int left, int right) {
        vector<int>s;
        for(int i=left;i<=right;i++){
            if(isprime(i)){
                s.push_back(i);
            }
        }
        if(s.size()<=1) return {-1,-1};
        else{
            int a,b;
            int mini=INT_MAX;
            for(int i=0;i<s.size()-1;i++){
                int j=s[i+1]-s[i];
                if(j<mini){
                    mini=j;
                    a=s[i];
                    b=s[i+1];
                }
            }
        return {a,b};
        }
    }
};