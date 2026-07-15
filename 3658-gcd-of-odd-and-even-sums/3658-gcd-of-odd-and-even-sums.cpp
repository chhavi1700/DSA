class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int so=n*n;
       int se=n*(n+1);
        cout<<se<<" "<<so;
        int r=0;
        while(r>=0){
            r=se%so;
            if(r==0) {
                return so;
                break;}
            se=so;
            so=r;
            
        }
        return 0;
    }
};