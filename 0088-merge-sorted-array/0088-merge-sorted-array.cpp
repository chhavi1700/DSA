class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            for(int i=0;i<nums2.size();i++){
                    nums1[m+i]=nums2[i];// oping the element of nums2 to nums1
            }
            sort(nums1.begin(),nums1.end());//sort the array nums1
    }
};