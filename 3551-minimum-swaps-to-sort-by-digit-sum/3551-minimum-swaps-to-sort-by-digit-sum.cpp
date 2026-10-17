class Solution {
public:
 int digi(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
 }
    int minSwaps(vector<int>& nums) {
       vector<pair<int,int>>ans;
       for(int i=0;i<nums.size();i++){
        ans.push_back({i,nums[i]});
       }
    sort(ans.begin(),ans.end(),[&](auto&a,auto&b){
        if(digi(a.second)==digi(b.second)){
            return a.second<b.second;
        }
        return digi(a.second)<digi(b.second);
    });
    int swaps=0;
    for(int i=0;i<nums.size();i++){
        while(ans[i].first!=i){
            swap(ans[i],ans[ans[i].first]);
            swaps++;
        }
    }
    return swaps;
    }
};