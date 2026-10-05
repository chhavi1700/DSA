class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int best=nums[0];
        int worst=nums[0];
        int ans=abs(nums[0]);
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=nums[i]+best;
            int v3=nums[i]+worst;
            best=max(v1,v2);
            worst=min(v1,v3);
            ans=max(ans,max(abs(worst),best));
        }
        return ans;
    }
};