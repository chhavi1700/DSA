class Solution {
public:
    string smallestPalindrome(string s) {
        // sort(s.begin(),s.end());
        // string t=s;
        // int n=s.size();
        // int j=n-1;
        // for (int i=0;i<n/2;i++){
        //     t[i]=s[i];
        //     cout<<t<<endl;
        //     t[j]=s[i+1];
        //      cout<<t<<endl;
        //     j--;
        //     i++;
        // }
        // return t;
        
        int n = s.size(), j = 0;
        int freq[26]{};

        // Traverse the first half
        for (int i = 0; i < n >> 1; i++)            
            freq[(s[i] & 31) - 1]++;      // ASCII → char freq index

        for (int i = 0; i < 26; i++) {
            while (freq[i]--) {                
                s[j] = 'a' + i;           // construct 1st half →                
                s[n - 1 - j++] = 'a' + i; // construct 2nd half ←
            }
        }

        return s;
    }
};