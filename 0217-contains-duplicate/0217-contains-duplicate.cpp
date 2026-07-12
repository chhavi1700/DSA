class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int same=nums[i];
            if(mpp.find(same)!=mpp.end()){
                return true;
            }
            mpp[nums[i]]=i;
        }
        return false;
    }
};