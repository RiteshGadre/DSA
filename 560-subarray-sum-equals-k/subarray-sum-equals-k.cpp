class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> map;
        int presum = 0;


        for(int ele : nums) {
            presum += ele;
            if(presum == k) count++;

            if(map.find(presum - k) != map.end()) {
                count+= map[presum - k];
            }
            map[presum]++;
        }

        return count;
    }
};