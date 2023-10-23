class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Brute force
        vector<vector<int>> secmat;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i<m; i++){
            vector<int> row;
            for(int j = n-1; j>=0; j--){
                row.push_back(matrix[j][i]);
            } 
            secmat.push_back(row);
        }
        matrix =  secmat;
    }
};