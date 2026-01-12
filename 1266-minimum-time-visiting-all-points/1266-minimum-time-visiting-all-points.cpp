class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int res=0,ans;
        for(int i=0;i<points.size()-1;i++){
            ans=max(abs(points[i][0]-points[i+1][0]),abs(points[i][1]-points[i+1][1]));
            res+=ans;
        }
        return res;
    }
};