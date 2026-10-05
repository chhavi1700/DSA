class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nd=arr[0];
        int ans=arr[0];
        int od=arr[0];
        for(int i=1;i<arr.size();i++){
            int v1=arr[i];
            int v2=nd+arr[i];
            od=max(nd,od+v1);
            nd=max(v1,v2);
            
            ans=max(ans,max(nd,od));
        }
        return ans;
    }
};