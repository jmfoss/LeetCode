class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int N = nums.size();
        
        int maxLength = findFirstZero(nums) + 1;
        
        for(int r = maxLength, l = 0, z = maxLength - 1; r < N; ++r) {
            if(nums[r] == 0) {
                l = z + 1;
                z = r;
            }
            
            maxLength = max(maxLength, r - l + 1);
        }   
        return maxLength;
    }
    
    int findFirstZero(vector<int>& nums) {
        for(int i = 0; i < nums.size(); ++i)
            if(nums[i] == 0) return i;
        return -1;
    }
};