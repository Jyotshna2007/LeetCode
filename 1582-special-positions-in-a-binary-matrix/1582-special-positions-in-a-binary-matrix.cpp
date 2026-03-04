class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    bool r = true;
                    bool c = true;
                    for (int k = 0; k < m; k++) {
                        if (k != j && mat[i][k] == 1) {
                            r = false;
                            break;
                        }
                    }
                    for (int l = 0; l < n; l++) {
                        if (l != i && mat[l][j] == 1) {
                            c = false;
                            break;
                        }
                    }
                    if (r && c)
                        cnt++;
                }
            }
        }
        return cnt;
    }
};