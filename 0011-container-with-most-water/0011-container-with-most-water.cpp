class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int a=0;
        while(l<r){
            int area=min(height[l],height[r])*(r-l);
            a=max(a,area);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return a;
    }
};