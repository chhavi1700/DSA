class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector(n,0));
        string ans;
        int maxlen=0;

        for(int diff=0;diff<n;diff++){

            for(int i=0,j=i+diff;j<n;i++,j++){//j-i=0,1,2,3....

                if(j==i){//principal diagonal elements 11,22,33
                    dp[i][j]=1;
                }
                else if(diff==1){
                    if(s[i]==s[j])dp[i][j]=2;//for first diagonal after principal diagonal
                    else dp[i][j]=0;
                }
                else //for rest
                {
                    if(s[i]==s[j]&&dp[i+1][j-1]>0)
                        dp[i][j]=dp[i+1][j-1]+2;
                }
                if(dp[i][j]>0){
                    if(j-i+1>maxlen){
                        maxlen=j-i+1;
                        ans=s.substr(i,maxlen);
                    }
                }
            }
        }
        return ans;
    }
};