class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total = nums[0];
        int curr = 0;

        for(int i=0; i<nums.size(); i++) {
            curr += nums[i];
            curr = max(curr, nums[i]);
            total = max(total , curr);
        }
        return total;
    }
};