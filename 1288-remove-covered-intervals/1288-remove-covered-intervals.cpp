class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<bool> covered(n, false);

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                if (intervals[i][0] <= intervals[j][0] &&
                    intervals[i][1] >= intervals[j][1]) {
                    covered[j] = true;
                }
                else if (intervals[j][0] <= intervals[i][0] &&
                         intervals[j][1] >= intervals[i][1]) {
                    covered[i] = true;
                }
            }
        }

        int ans = 0;
        for (bool x : covered) {
            if (!x) ans++;
        }

        return ans;
    }
};