class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int,int>s;
        for(int i=0;i<=nums.size()-k;i++){
            set<int>a;
            for(int j=i;j<i+k;j++){
                a.insert(nums[j]);
            }
            for(int i:a) s[i]++;
        }
        int res=-1;
        for(auto i:s){
            if(i.second==1){
                res=max(res,i.first);
            }
        }
        return res;
    }
};