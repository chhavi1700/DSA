class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){   
             int p=1;
             int temp=n;
            while(temp){
                int r=temp%10;
                p*=r;
                temp/=10;
                }
            if(p%t==0) {
                return n;
                }
            else n++; 
        }
    }
};