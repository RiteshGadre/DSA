class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right= 0, mx = 0, n = s.size();
        unordered_map<char, int> map;

        while(right < n) {
            map[s[right]]++;

            if(map[s[right]] > 1) {
                while(s[left] != s[right]) {
                    map[s[left++]]--;
                    mx = max(mx, right-left+1);
                }
                map[s[left++]]--;
                
            }
            right++;
        }
        mx = max(mx, right-left);
        return mx;
    }
};