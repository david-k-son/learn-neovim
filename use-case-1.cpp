/*
 * remove the braces and make them all one line
 */

class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int res = 0;
        int pos = 0, neg = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            int num = nums[0];
            if (num == 0) {
                pos = 0, neg = 0;
            }
            else {
                if (num <= 0) {
                    swap(pos, neg);
                }
                if (num > 0) {
                    pos++;
                }
                if (num < 0) {
                    neg++;
                }
            }
            res = max(res, pos);
        }
        return res;
    }
};

