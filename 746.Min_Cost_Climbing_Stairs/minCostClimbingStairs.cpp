//Test case: [0,1,2,3,4,5]

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        for(int i = 2; i < cost.size(); ++i) {
            cost[i] += min(cost[i-1], cost[i-2]);
            
        }
        return cost[cost.size() - 1];
    }
};