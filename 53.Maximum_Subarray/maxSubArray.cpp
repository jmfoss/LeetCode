class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        for(int left = 0, right = 0, current = 0; right < nums.size(); ++right) {
            current += nums[right];
            if(current > max) max = current;
            if(current < 0) {
                left = right + 1;
                current = 0;
            }
        }
        return max;
    }
};