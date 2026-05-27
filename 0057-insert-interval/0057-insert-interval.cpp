class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int a=newInterval[0];
        int b=newInterval[1];
        intervals.push_back({a,b});
         sort(intervals.begin(),intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            int x=intervals[i][0];
            int y=intervals[i][1];
            if(end>=x){
               end=max(end,y);
            }
            else{
                ans.push_back({start,end});
                start=x;
                end=y;
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};