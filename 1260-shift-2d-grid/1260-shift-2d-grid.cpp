class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        while (k) {
            int last = grid[n - 1][m - 1];
            for (int i = n - 1; i >= 0; i--) {
                for (int j = m - 1; j >= 0; j--) {
                    if (i == 0 && j == 0)
                        grid[i][j] = last;
                    else if (j == 0)
                        grid[i][j] = grid[i - 1][m - 1];
                    else
                        grid[i][j] = grid[i][j - 1];
                }
            }
            k--;
        }
        return grid;
    }
};