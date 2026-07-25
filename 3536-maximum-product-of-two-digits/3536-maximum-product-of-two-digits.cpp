class Solution {
public:
    int maxProduct(int n) {
        int l=0;
        int h=0;
        while(n){
            int r=n%10;
            if(r>l) l=r;
            if(h<l) swap(h,l);
            n/=10; 
        }
        return h*l;
    }
};