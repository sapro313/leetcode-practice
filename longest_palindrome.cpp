int longestPalindrome(vector<string>& words) {
    unordered_map<string, int> m;
    int ans = 0;
    bool hasMiddle = false;

    for (string& word : words) {
        string rev = word;
        reverse(rev.begin(), rev.end());

        if (m[rev] > 0) {
            // Found a reverse pair
            ans += 4;
            m[rev]--;
        } else {
            m[word]++;
        }
    }

    // Check for a possible middle word (like "aa", "bb", etc.)
    for (auto& [key, count] : m) {
        if (key[0] == key[1] && count > 0) {
            ans += 2;
            break; // only one such word can be placed in the middle
        }
    }

    return ans;
}
