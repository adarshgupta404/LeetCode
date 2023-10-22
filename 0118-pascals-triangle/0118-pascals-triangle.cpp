class Solution {
public:
    vector<int> generaterows(int n){
        long long ans = 1;
        vector<int> res;
        res.push_back(1);
        for(int i = 1; i<n; i++){
            ans = ans*(n-i);
            ans = ans/(i);
            res.push_back(ans);
        }
        return res;
    } 
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> res;
       for(int i = 1; i<=numRows; i++){
           res.push_back(generaterows(i));
       } 
       return res;
    }
};