class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        // Store the positions of all zeros
        vector<pair<int, int>> zeros;

        // First traversal
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        // Process every stored zero
        for (auto it : zeros) {
            int x = it.first;
            int y = it.second;

            // Make the entire row zero
            for (int j = 0; j < m; j++) {
                matrix[x][j] = 0;
            }

            // Make the entire column zero
            for (int i = 0; i < n; i++) {
                matrix[i][y] = 0;
            }
        }
    }
};