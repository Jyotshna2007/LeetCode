class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) {
            if (a[0] == b[0])
                return a[1] > b[1];
            return a[0] < b[0];
        });
        int cnt = 1;
        int maxi = intervals[0][1];
        for (int i = 1; i < n; i++) {
            if (intervals[i][1] > maxi) {
                cnt++;
                maxi = intervals[i][1];
            }
        }
        return cnt;
    }
};