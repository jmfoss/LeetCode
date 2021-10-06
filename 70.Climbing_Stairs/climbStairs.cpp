class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        int first = 2, second = 1;
        for(int i = 3; i <= n; ++i) {
            int current = first + second;
            second = first;
            first = current;
        }
        
        return first;
    }
};