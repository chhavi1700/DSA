class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {

        int n = grid.size();      // rows
        int m = grid[0].size();   // columns

        while (k--) {

            int prevLast = grid[n - 1][m - 1];

            for (int i = 0; i < n; i++) {

                int currLast = grid[i][m - 1];

                for (int j = m - 1; j > 0; j--) {
                    grid[i][j] = grid[i][j - 1];
                }

                grid[i][0] = prevLast;

                prevLast = currLast;
            }
        }

        return grid;
    }
};