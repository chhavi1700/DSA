class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(char ch:s){
            if(isalnum(ch)){
                ch = tolower(ch);
                ans+=ch;
            } 
        }
        int l=0;
        int r=ans.size()-1;
        while(l<=r){
            if(ans[l]!=ans[r]) {
                return false;
                break;
        }
        l++;
        r--;
  }
    return true;
    }
};