class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> square;
       for(int i=0;i<n;i++) {
        square.push_back(nums[i]*nums[i]);
       }
       sort(square.begin(),square.end());
       return square;
    }
};