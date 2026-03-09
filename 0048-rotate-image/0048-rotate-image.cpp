class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int c= matrix.size();
        int r=matrix[0].size();
        for(int i=0;i<c;i++){
            for(int j=i;j<r;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};