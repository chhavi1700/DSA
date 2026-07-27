class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        // sort(nums.begin(),nums.end());
        //     return max(nums[0] * nums[1] * nums[n - 1],
        //            nums[n - 3] * nums[n - 2] * nums[n - 1]);
        int a=INT_MIN;
        int b=INT_MIN;
        int c=INT_MIN;
        int d=INT_MAX;
        int e=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<d) d=nums[i];
            if(d<e) swap(d,e);
            if(nums[i]>c) c=nums[i];
            if(c>b) swap(b,c);
            if(b>a) swap(a,b);
        }
        return max(a*b*c,a*d*e);
    }
};