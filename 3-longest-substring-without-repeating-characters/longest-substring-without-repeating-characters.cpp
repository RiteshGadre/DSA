class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int left = 0;
        int right = 0;
        int mx = s.size() ? 1 : 0;
        unordered_map<char, int> map;

        while(right < n) {
            if(map.find(s[right]) == map.end()) {
                map[s[right]] = right;
            }
            else{
                mx = max(right-left, mx);
                left = max(map[s[right]]+1, left);
                map[s[right]] = right;
            }
            cout << s[right] << ' ' << mx << ' ' << left << ' ' << right << endl;
            right++;
            
        }
        mx = max(right-left, mx);
        
        return mx;
    }
};
/*
abcabcbb



*/