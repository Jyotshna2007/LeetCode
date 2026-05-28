class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int cnt=1;
        int end=points[0][1];
        for(int i=1;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            if(x<=end){
                end=min(end,y);
            }
            else{
                cnt++;
                end=y;
            }
        }
        return cnt;
    }
};