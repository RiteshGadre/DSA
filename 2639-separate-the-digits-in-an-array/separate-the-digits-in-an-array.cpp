class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for(int ele : nums) {
            int curr = ele;
            vector<int> temp;
            while(curr) {
                temp.push_back(curr % 10);
                curr = curr / 10;
            }

            while(!temp.empty()) {
                result.push_back(temp.back());
                temp.pop_back();
            }
        }
        return result;
    }
};