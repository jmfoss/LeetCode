//Test cases: 0, 2, 3, 30

class Solution {
public:
    int tribonacci(int n) {
        if(n <= 1) return n;
        if(n == 2) return 1;
        
        int first = 1, second = 1, third = 0;
        for(int i = 3; i <= n; ++i) {
            int current = first + second + third;
            third = second;
            second = first;
            first = current;
        }
        return first;
    }
};