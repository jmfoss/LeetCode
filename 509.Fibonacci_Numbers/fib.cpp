//Test cases: 0, 2, 4, 30

class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        
        int first = 1, second = 0;
        for(int i = 2; i <= n; ++i) {
            int temp = first + second;
            second = first;
            first = temp;
        }
        return first;
    }
};