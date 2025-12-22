class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int preSum = 0;
        int left = 0;
        int right = 0;
        int count = 0;
        unordered_map<int,int> map;

        while(right < nums.size()) {
            preSum += nums[right];
            if(preSum == goal) count++;
            if(map.find(preSum - goal) != map.end()) {
                count += map[preSum - goal];
            }
            map[preSum]++;
            right++;
        }
        
        return count;
    }
};

/*
1 0 1 0 1
1 1 2 2 3
0 0 1 2
*/