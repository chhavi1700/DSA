class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd;
        int mx = 0;

        for (int i = 0; i < nums.size(); i++) {
            mx = max(mx, nums[i]);
            prefixGcd.push_back(gcd(nums[i], mx));  
        }
        int l=0;
        int h=prefixGcd.size()-1;
        long long s=0;
        sort(prefixGcd.begin(),prefixGcd.end());
        while(l<h){
           s+= gcd(prefixGcd[l],prefixGcd[h]);
           l++;
           h--;
        }
        return s;
    }
int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
};