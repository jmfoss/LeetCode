class Solution {
public:
    int jump(vector<int>& nums) {
        int N = nums.size();
        if(N == 1) return 0;
        
        vector<int> jumps(N, N);
        jumps[0] = 0;
        
        for(int i = 1, j = 0; i < N; ++j) {
            
            if(j == i) {
                ++i;
                j = 0;
                if(i >= N) break;
            }
            
            if(i - j <= nums[j]) {
                if(jumps[i] > jumps[j] + 1) {
                    jumps[i] = jumps[j] + 1;
                }
            } 
            

        }
        return jumps[N - 1];
    }
};