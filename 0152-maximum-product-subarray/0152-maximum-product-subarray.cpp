class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int best=nums[0];
        int worst=nums[0];
        int ans=nums[0];
        int ans1=nums[0];
        int ans2=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=best*nums[i];
            int v3=worst*nums[i];
            worst=min(min(v1,v2),v3);
            best=max(max(v1,v2),v3);
            ans1=max(ans1,best);
            ans2=min(ans2,worst);
            ans=max(ans1,ans2);
        }
        return ans;
    }
};