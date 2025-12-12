class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxlen = 0;
        int maxf = 0;
        int left = 0, right=0;
        unordered_map<char, int> map;

        while(right < s.size()) {
            map[s[right]]++;
            maxf = max(maxf, map[s[right]]);
            int change = right - left + 1;
            while(right -left + 1 - maxf > k) {
                map[s[left]]--;
                maxf = 0;
                for(char c ='A'; c<='Z'; c++) {
                    maxf = max(maxf, map[c]);
                }
                left++;
                
            }
            maxlen = max(maxlen, right - left + 1);
            right++;
        }
        maxlen = max(maxlen, right-left);
        
        return maxlen;
    }
};