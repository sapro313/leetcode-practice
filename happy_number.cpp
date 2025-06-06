class Solution {
public:
    int helper(int temp) {
        int val = 0;
        int ans = 0;
        while (temp) {
            val = temp % 10;
            ans = ans + (val * val);
            temp = temp / 10;
        }
        return ans;
    }

    bool isHappy(int temp) {
        int first = temp;
        int second = helper(temp);
        while (second != 1 && first != second) {
            first = helper(first);
            second = helper(helper(second));
        }
        return second == 1 ? true : false;
    }
};
