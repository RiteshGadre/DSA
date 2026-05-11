class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for(int ele : nums) {
            string currNum = to_string(ele);
            for(char c : currNum)
                result.push_back(c - '0');
            
        }
        return result;
    }
};