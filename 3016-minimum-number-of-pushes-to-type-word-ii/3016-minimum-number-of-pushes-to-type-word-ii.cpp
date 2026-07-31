class Solution {
public:
    int minimumPushes(string word) {
        int freq[26] = {0};

        for (char c : word)
            freq[c - 'a']++;

        // bucket[f] = number of characters having frequency f
        vector<int> bucket(word.size() + 1, 0);

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0)
                bucket[freq[i]]++;
        }

        int ans = 0;
        int pos = 0;

        // Traverse frequencies from highest to lowest
        for (int f = word.size(); f >= 1; f--) {
            while (bucket[f]--) {
                ans += f * (pos / 8 + 1);
                pos++;
            }
        }

        return ans;
    }
};