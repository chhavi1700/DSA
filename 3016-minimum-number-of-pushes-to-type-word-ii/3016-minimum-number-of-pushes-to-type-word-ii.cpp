class Solution {
public:
    int minimumPushes(string word) {
        int freq[26] = {0};

// Count frequency of each character
for (char c : word)
    freq[c - 'a']++;

// Append frequencies to a vector
vector<int> v;

for (int i = 0; i < 26; i++) {
    if (freq[i] > 0)
        v.push_back(freq[i]);
}
int sum=0;
sort(v.begin(),v.end(),greater<int>());
        for (int i = 0; i < v.size(); i++) {
    if (i < 8) sum += v[i];
    else if (i < 16) sum += v[i] * 2;
    else if (i < 24) sum += v[i] * 3;
    else sum += v[i] * 4;
}
        return sum;
    }
};