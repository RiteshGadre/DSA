class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int total = 0;
        int temp = 0;
        sort(cost.begin(), cost.end());

        for(int i= cost.size()-1; i>=0; i--) {
            if(temp == 2) {
                temp = 0;
                continue;
            }
            total += cost[i];
            temp++;
        }
        return total;
    }
};