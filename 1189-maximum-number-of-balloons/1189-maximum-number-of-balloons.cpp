class Solution {
public:
    int maxNumberOfBalloons(string text) {
         int b = 0, a = 0, l = 0, o = 0, n = 0;
        for(char ch :text){
            if (ch=='b') b++;
            if(ch=='a') a++;
            if(ch=='l') l++;
            if(ch=='o') o++;
            if(ch=='n') n++;
        }
        return min({b,a,l/2,o/2,n});
    }
};