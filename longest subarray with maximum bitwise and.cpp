class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        int i = 0;
        int val = 0;

        while (i < nums.size()) {
            if (nums[i] == maxi) {
                int size = 0;
                int j = i;

                while (j < nums.size() && nums[j] == maxi) {
                    size++;
                    j++;
                }

                val = max(val, size);
                i = j; 
                
            } else {
                i++;
            }
        }

        return val;
    }
};
