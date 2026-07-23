class Solution {
public:
    int cnt = 0;
    // bool isbarrg(vector<int> arr) {
    //     int n = arr.size();
    //     for (int i = 0; i < n; i++) {
    //         if (arr[i] % (i + 1) != 0 and (i + 1) % arr[i] != 0)
    //             return false;
    //     }
    //     return true;
    // }
    void solve(vector<int>& build, vector<vector<int>>& ans, vector<int>& curr,
               int i, vector<int>& vis) {
        if (i == build.size()) {
            // ans.push_back(curr);
            // if (isbarrg(curr))
            cnt++;
            return;
        }
        for (int j = 0; j < build.size(); j++) {
            if (vis[j])
                continue;
            if (build[j] % (i + 1) != 0 and (i + 1) % build[j] != 0)
                continue;
            vis[j] = 1;
            curr.push_back(build[j]);
            solve(build, ans, curr, i + 1, vis);
            curr.pop_back();
            vis[j] = 0;
        }
    }
    int countArrangement(int n) {
        vector<int> build;
        for (int i = 0; i < n; i++) {
            build.push_back(i + 1);
        }
        vector<vector<int>> ans;
        vector<int> curr, vis(build.size(), 0);
        solve(build, ans, curr, 0, vis);
        return cnt;
    }
};