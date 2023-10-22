class Solution {
public:
    // vector<int> generaterows(int n){
    //     long long ans = 1;
    //     vector<int> res;
    //     res.push_back(1);
    //     for(int i = 1; i<n; i++){
    //         ans = ans*(n-i);
    //         ans = ans/(i);
    //         res.push_back(ans);
    //     }
    //     return res;
    // } 
    // vector<vector<int>> generate(int numRows) {
    //    vector<vector<int>> res;
    //    for(int i = 1; i<=numRows; i++){
    //        res.push_back(generaterows(i));
    //    } 
    //    return res;
    // }
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res;
       for(int i = 0; i<numRows; i++){
           vector<int> v(i+1, 1);
           for(int j = 1; j<i; j++){
               v[j] = res[i-1][j]+res[i-1][j-1];
           }
           res.push_back(v);
       } 
       return res;
    }
};