class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    vector<int> rightmax(n);
    int maxi=0;
    int p=0;
    for(int i=n-1;i>=0;i--){
        maxi=max(maxi,prices[i]);
        rightmax[i]=maxi;
        cout<<rightmax[i]<<" ";
    }
     for(int i=0;i<n;i++){
        int profit=rightmax[i]-prices[i];
        p=max(p,profit);
        }
     return p; 
    }
};