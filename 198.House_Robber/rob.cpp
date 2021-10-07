class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        
        if(n == 1) return nums[0];
        if(n == 2) return max(nums[0], nums[1]);
        
        vector<int> money(n, 0);
        
        money[0] = nums[0];
        money[1] = nums[1];
        
        for(int first = 0, second = 2; first < n - 2;) {
            
            
            if(nums[second] + money[first] > money[second]) {
                money[second] = nums[second] + money[first];
            }
            
            ++second;
            
            if(second >= n) {
                ++first;
                second = first + 2;
            } 
        }
        
        int max = 0;
        for(int i = 0; i < n; ++i) {
            if(money[i] > max) max = money[i];
        }
        return max;
    }
};