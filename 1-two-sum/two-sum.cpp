class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int n = nums.size();

        for(int i=0; i<n; i++) {
            int reqNum = target - nums[i];
            if(map.find(reqNum) != map.end()) {
                return {map[reqNum], i};
            }
            map[nums[i]] = i;
        }
        return {-1, -1};
    }
};