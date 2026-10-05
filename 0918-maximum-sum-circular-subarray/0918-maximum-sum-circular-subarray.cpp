class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int best=nums[0];
        int total=nums[0];
        int worst=nums[0];
        int ans=nums[0];
        int ans1=nums[0];
        for(int i=1;i<nums.size();i++){
            total+=nums[i];
            int v1=nums[i];
            int v2=nums[i]+best;
            int v3=nums[i]+worst;
            best=max(v1,v2);
            worst=min(v1,v3);
            ans=max(ans,best);
            ans1=min(ans1,worst);
            
        }
        if(ans < 0)
    return ans;
        return max(ans,total-ans1);
    }
};