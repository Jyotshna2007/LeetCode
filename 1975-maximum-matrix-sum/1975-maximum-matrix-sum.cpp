class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long total=0;
        long long neg=0;
        int res=INT_MAX;
        for(auto& i:matrix){
            for(int j:i){
        if(j<0) neg++;
        total+=abs(j);
        res=min(res,abs(j));
            }
        }
        if(neg%2==0) return total;
        else return total-2*res;
    }
};