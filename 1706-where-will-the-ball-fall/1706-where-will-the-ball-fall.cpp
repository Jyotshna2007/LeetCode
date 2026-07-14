class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> ans;
        for (int k = 0; k < m; k++) {
            int i = 0, j = k;
            while (i < n) {
                if (grid[i][j] == 1 && j + 1 < m && grid[i][j + 1] == 1) {
                    if (i == n - 1) {
                        ans.push_back(j + 1);
                        break;
                    } else {
                        i++;
                        j++;
                    }
                } else if (grid[i][j] == -1 && j - 1 >= 0 &&
                           grid[i][j - 1] == -1) {
                    if (i == n - 1) {
                        ans.push_back(j - 1);
                        break;
                    } else {
                        i++;
                        j--;
                    }
                } else {
                    ans.push_back(-1);
                    break;
                }
            }
        }
        return ans;
    }
};