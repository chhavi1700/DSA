class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0;
        int high=0;
        int sum=0;
        int sum1=0;
        int res=INT_MAX;
        while(high<nums.size()){
            sum+=nums[high];
            sum1+=nums[high];
            while(sum>=target){
                int len=high-low+1;
                res=min(res,len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
        if(sum1<target) return 0;
        return res;
    }
};