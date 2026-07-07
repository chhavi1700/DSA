class Solution {
public:
    long long sumAndMultiply(int n) {
        long long c=0;
        long long p=0;
        long long a=1;
        while(n){
            int b=n%10;
            n/=10;
            if(b!=0){
                p+=b;
                b*=a;
                a*=10;
                c+=b;
            }
    }
     long long d=p*c;
        return d;}
};