class Solution {
public:
    string smallestPalindrome(string s) {
        sort(s.begin(),s.end());
        string t=s;
        int n=s.size();
        int i=0;
        int j=n-1;
        int k=0;
               while (k < n) {
            if (k + 1 < n && s[k] == s[k + 1]) {
                t[i] = s[k];
                t[j] = s[k];
                i++;
                j--;
                k += 2;
            } else {
                // Middle character (odd frequency)
                t[n / 2] = s[k];
                k++;
            }
        }

        return t;
        
        // int n = s.size(), j = 0;
        // int freq[26]{};

        // // Traverse the first half
        // for (int i = 0; i < n >> 1; i++)            
        //     freq[(s[i] & 31) - 1]++;      // ASCII → char freq index

        // for (int i = 0; i < 26; i++) {
        //     while (freq[i]--) {                
        //         s[j] = 'a' + i;           // construct 1st half →                
        //         s[n - 1 - j++] = 'a' + i; // construct 2nd half ←
        //     }
        // }

        // return s;
    }
};