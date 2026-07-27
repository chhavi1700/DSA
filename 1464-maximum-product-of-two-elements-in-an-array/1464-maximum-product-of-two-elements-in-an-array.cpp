class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int h=0;
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>l) l=nums[i];
            if(l>h) swap(l,h);
        }
        return (l-1)*(h-1);
    }
};