class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
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