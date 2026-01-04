class Solution {
public:
int F(int n){
    int cnt=0,sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            sum+=i;
            if(i!=n/i){
                cnt++;
                sum+=n/i;
            }
        }
        if(cnt>4) return 0;
    }
    return (cnt==4)?sum:0;
}
    int sumFourDivisors(vector<int>& nums) {
        int t=0;
        for(auto num:nums){
            t+=F(num);
        }
        return t;
    }
};