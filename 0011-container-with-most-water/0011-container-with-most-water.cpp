class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int a=0;
        while(l<r){
            int area=min(height[l],height[r])*(r-l);
            if(height[l]<height[r]){
                if(area>a) a=area;
                l++;
            }
            else{
                if(area>a) a=area;
                r--;
            }
        }
        return a;
    }
};