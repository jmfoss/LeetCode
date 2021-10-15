class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>* row = new vector<int>;
        
        for(int i = 0; i <= rowIndex; ++i) {
            for(int j = 1, prev = 1, cur = 0; j < i; ++j) {
                
                cur = (*row)[j];
                (*row)[j] = prev + cur;
                prev = cur;
            }
            row->push_back(1);
        }
        return *row;
    }
};