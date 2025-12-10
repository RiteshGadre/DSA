class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int mx = 0;
        int zeroCount = 0;
        int n = nums.size();

        while (right < n) {
            zeroCount += (nums[right] == 0);
            if (zeroCount > k) {
                while (nums[left] != 0) {
                    left++;
                }
                left++;
                zeroCount--;
            }
            mx = max(mx, right - left + 1);
            right++;
        }
        mx = max(mx, right - left);

        return mx;
    }
};