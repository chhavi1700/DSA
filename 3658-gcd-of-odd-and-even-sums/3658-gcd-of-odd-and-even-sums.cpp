class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int so=1;
        int se=2;
        int o=1;
        int e=2;
        for(int i=0;i<n-1;i++){
            o+=2;
            e+=2;
            so+=o;
            se+=e;
        }
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