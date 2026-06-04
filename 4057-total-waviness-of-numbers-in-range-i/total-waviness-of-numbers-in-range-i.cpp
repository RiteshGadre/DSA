class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        while(num1 <= num2) {
            string s = to_string(num1);
            
            // check peak
            int ct = 0;
            for(int i=1; i<s.size()-1; i++) {
                ct += (s[i]>s[i-1] && s[i]>s[i+1]);
                ct += (s[i]<s[i-1] && s[i]<s[i+1]);
            }
            cout << num1 << ' ' << ct << endl;
            count += ct;
            num1++;
        }
        return count;
    }
};