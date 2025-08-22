//leetcode problem 3637
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int p = -1, q = -1, i = 0, n = nums.size();
        if (n < 3) return false;
        for (i = 0; i + 1 < n; i++) {
            if (nums[i] >= nums[i + 1]) {
                p = i;
                break;
            }
        }
        if (p == -1 || p == 0) return false;

        for (i = p; i + 1 < n; i++) {
            if (nums[i] <= nums[i + 1]) {
                q = i;
                break;
            }
        }
        if (q == -1 || q == p) return false;

        for (i = q; i + 1 < n; i++) {
            if (nums[i] >= nums[i + 1]) {
                break;
            }
        }

        return i == n - 1;
    }
};
