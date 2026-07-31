class Solution {
public:
    int minimumPushes(string word) {

    int n = 8;

    unordered_map<char, int> freq;

    // Count frequencies
    for (char c : word)
        freq[c]++;

    // Store frequencies in a vector
    vector<int> v;
    for (auto it : freq)
        v.push_back(it.second);

    // Sort in descending order
    sort(v.begin(), v.end(), greater<int>());

    int ans = 0;
    int multiplier = 1;

    for (int i = 0; i < v.size(); i++) {
        ans += v[i] * multiplier;

        // Increase multiplier after every n frequencies
        if ((i + 1) % n == 0)
            multiplier++;
    }

    return ans;
    }
};