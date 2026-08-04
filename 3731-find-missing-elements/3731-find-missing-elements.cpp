class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>a;
        for (int i = nums[0]; i<=nums[nums.size()-1]; i++) {
        if (find(nums.begin(), nums.end(), i) == nums.end()) {
            a.push_back(i);}
        }
        return a;
    }
};