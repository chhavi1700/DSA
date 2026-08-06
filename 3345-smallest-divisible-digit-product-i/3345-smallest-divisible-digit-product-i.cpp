class Solution {
public:
    int smallestNumber(int n, int t) {
        int a=n; 
        while(true){   
             int p=1;
             int temp=a;
            while(temp){
                int r=temp%10;
                p*=r;
                temp/=10;
                }
            if(p%t==0) {
                return a;
                break;}
            else a++; 
        }
    }
};