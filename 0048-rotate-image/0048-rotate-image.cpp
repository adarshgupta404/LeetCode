class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Brute force O(n*n) Time and O(n*n) Space
        // vector<vector<int>> secmat;
        // int m = matrix.size();
        // int n = matrix[0].size();
        // for(int i = 0; i<m; i++){
        //     vector<int> row;
        //     for(int j = n-1; j>=0; j--){
        //         row.push_back(matrix[j][i]);
        //     } 
        //     secmat.push_back(row);
        // }
        // matrix =  secmat;
        // Optimal Solution O(n*n) Time and O(1) Space
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i<m; i++){
            for(int j = 0; j<=i; j++){
                swap(matrix[i][j], matrix[j][i]);
            } 
        }
        for(int i=0;i<m;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};