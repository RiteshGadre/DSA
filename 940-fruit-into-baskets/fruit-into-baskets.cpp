class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxlen = 0;
        int left = 0;
        int right = 0;
        unordered_map<int, int> map;

        while (right < fruits.size()) {
            map[fruits[right]]++;
            while (map.size() > 2) {
                map[fruits[left]]--;
                if (map[fruits[left]] == 0) {
                    map.erase(fruits[left]);
                }
                left++;
            }

            maxlen = max(maxlen, right - left + 1);
            right++;
            // cout << left << ' ' << right << ' ' << maxlen << endl;
        }
        maxlen = max(maxlen, right - left);

        return maxlen;
    }
};

/*
1 2 1
1 2 3

0 1 2 2
  1 2 2

*/