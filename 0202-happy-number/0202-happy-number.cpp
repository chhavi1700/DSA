class Solution {
public:
    int sos(int n){
        int s=0;
        while(n>0){
            int d=n%10;
            n/=10;
            s+=d*d;
        }
        return s;
    }
    bool isHappy(int n) {
      int slow=n;
      int fast=n;
      while(fast!=1){
        slow=sos(slow);
        fast=sos(fast);
        fast=sos(fast);
        if(slow==fast && slow!=1) return false;
      }  
      return true;
    }
};