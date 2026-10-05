class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nd=arr[0];
        int ans=arr[0];
        int od=INT_MIN;
        for(int i=1;i<arr.size();i++){
            int v1=arr[i];
            int v2=nd+arr[i];
            int prev=nd;
            if(od==INT_MIN)od=arr[0];
            od=max(prev,od+v1);
            nd=max(v1,v2);            
            ans=max(ans,max(nd,od));
        }
        return ans;
    }
};