class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i=nums.size()-2; i>=0; i-- ) {
            if(nums[i] < nums[i+1]) {
                index = i;
                break;
            }
        }

        if(index == -1) {
            reverse(nums.begin(), nums.end());
            return ;
        }

        for(int i=nums.size()-1; i>=0; i--) {
            if(nums[i] > nums[index]) {
                swap(nums[index], nums[i]);
                break;
            }
        }

        reverse(nums.begin()+index+1, nums.end());
    }
};
/*
1 2 3 -> 1 3 2 -> 2 1 3 -> 2 3 1 -> 3 1 2 -> 3 2 1


*/