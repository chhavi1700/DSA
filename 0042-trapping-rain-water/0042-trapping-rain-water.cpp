class Solution {
public:
    int trap(vector<int>& height) {

        int n = height.size();

        vector<int> leftmax(n);
        vector<int> rightmax(n);

        int left = 0;
        for(int i = 0; i < n; i++) {
            left = max(left, height[i]);
            leftmax[i] = left;
        }

        int right = 0;
        for(int i = n - 1; i >= 0; i--) {
            right = max(right, height[i]);
            rightmax[i] = right;
        }

        int ans = 0;

        for(int i = 0; i < n; i++) {
            ans += min(leftmax[i], rightmax[i]) - height[i];
        }

        return ans;
    }
};