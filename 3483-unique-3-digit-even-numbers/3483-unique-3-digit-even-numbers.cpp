class Solution {
public:
int cnt=0;
vector<bool>used;
void fun(int idx,string &ans,vector<int>&digits){
    if(ans.size()==3){
        if((ans[2]-'0')%2==0) cnt++;
        return;
    }
    bool seen[10]={false};
    for(int i=0;i<digits.size();i++){
        if(used[i]) continue;
        if(ans.empty() && digits[i]==0) continue;
        if(seen[digits[i]]) continue;
        seen[digits[i]]=true;
        ans+=char(digits[i]+'0');
        used[i]=true;
        fun(idx+1,ans,digits);
        ans.pop_back();
        used[i]=false;
    }
}
    int totalNumbers(vector<int>& digits) {
        string ans="";
        used.resize(digits.size(),false);
         fun(0,ans,digits);
         return cnt;
    }
};