class Solution {
public:
    int longestPalindrome(string s) {
        map<char, int> m;
        for (char c : s) m[c]++;

        int ans = 0;
        bool hasOdd = false;

        for (auto it : m) {
            if (it.second % 2 == 0) {
                ans += it.second;
            } else {
                ans += it.second - 1;
                hasOdd = true;
            }
        }

        if (hasOdd) ans += 1;

        return ans;
    }
};
