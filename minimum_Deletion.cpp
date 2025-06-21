class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<char,int> mp;
        for (char ch : word) {
            mp[ch]++;
        }

        vector<char> v2;
        for (auto &p : mp) {
            v2.push_back(p.first);
        }

        int ans = INT_MAX;

        for (int base = 1; base <= word.length(); base++) {
            int ans1 = 0;

            for (int j = 0; j < v2.size(); j++) {
                int freq = mp[v2[j]];

                if (freq - base > k) {
                    ans1 += freq - base - k;
                }
                else if (freq<base ) {
                    
                     
                    ans1 += freq;
                    
                }
            }

            ans = min(ans, ans1);
        }

        return ans;
    }
};
