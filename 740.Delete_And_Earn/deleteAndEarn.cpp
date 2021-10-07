class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        map<int, int> count;
        for(auto num : nums) {
            if(count.find(num) == count.end())
                count[num] = 1;
            else
                ++count[num];
        }

        int avoid = 0, use = 0, prev = -1;
        for(auto kv : count) {
            int m = max(avoid, use);      
            if(kv.first - 1 != prev) {
                use = kv.first * kv.second + m;
            }
            else {
                use = kv.first * kv.second + avoid;
            }
            avoid = m;
            prev = kv.first;
        }
        return max(avoid, use);
    }  
};