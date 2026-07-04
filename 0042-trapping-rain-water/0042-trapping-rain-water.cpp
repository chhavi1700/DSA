class Solution {
public:
    int trap(vector<int>& height) {

        // int n = height.size();

        // vector<int> leftmax(n);
        // vector<int> rightmax(n);

        // int left = 0;
        // for(int i = 0; i < n; i++) {
        //     left = max(left, height[i]);
        //     leftmax[i] = left;
        // }

        // int right = 0;
        // for(int i = n - 1; i >= 0; i--) {
        //     right = max(right, height[i]);
        //     rightmax[i] = right;
        // }

        // int ans = 0;

        // for(int i = 0; i < n; i++) {
        //     ans += min(leftmax[i], rightmax[i]) - height[i];
        // }

        // return ans;
        int l=0;
        int r=height.size()-1;
        int leftmax=0;
        int rightmax=0;
        int ans=0;
        while(l<r){
           
            if(height[l] <= height[r]){
                leftmax=max(leftmax,height[l]);
                ans+=(leftmax-height[l]);
                l++;
            }
            else {
                 rightmax=max(rightmax,height[r]);
                ans+=(rightmax-height[r]);
                r--;
            }
        }
        return ans;
    }
};