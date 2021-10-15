class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        
        for(int i = 0; i < numRows; ++i) {
            triangle.push_back(*(new vector<int>(i + 1)));
            triangle[i].front() = 1;
            for(int j = 1; j < i; ++j) {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            triangle[i].back() = 1;
        }
        return triangle;
    }
    
};