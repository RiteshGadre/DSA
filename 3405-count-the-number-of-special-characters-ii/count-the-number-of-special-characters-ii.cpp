class Solution {
public:
    int numberOfSpecialChars(string word) {
        int result = 0;
        unordered_map<char, int> lower;
        unordered_map<char, int> upper;

        for(int i=0; i<word.size(); i++) {
            if(word[i]>='a' && word[i]<='z') {
                lower[word[i]] = i;
            }
            else {
                if(upper.find(word[i]) == upper.end())
                    upper[word[i]] = i;
            }
        }

        for(auto it : lower) {
            char c = toupper(it.first);
            if(upper.find(c) != upper.end()) {
                if(upper[c] > it.second)
                    result++;
            }
        }

        return result;
    }
};

/*

*/