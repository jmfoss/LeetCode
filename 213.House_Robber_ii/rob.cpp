class Solution {
public:
    int rob(vector<int>& nums) {
        
        int N = nums.size();
        if(N == 1) return nums[0];
        
        int max1 = rob_helper(N - 2, 1, nums);
        int max2 = rob_helper(N - 3, 0, nums);
        
        return max(max1, max2);
    }
    

    int rob_helper(int start, int end, vector<int>& nums) {
        int first = nums[start + 1];
        
        for(int i = start, second = 0, current = 0; i >= end; --i) {
            current = max(first, second + nums[i]);
            second = first;
            first = current;
        }
        
        return first;
    }
};