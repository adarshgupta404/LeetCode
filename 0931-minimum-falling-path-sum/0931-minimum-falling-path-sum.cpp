#define ll long long int
class Solution {
public:
    ll dp[101][101];
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        ll ans = INT_MAX;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<col;i++){
            ans = min(ans,solve(0,i,matrix));
        }
        return ans;
    }
    ll solve(int i,int j,vector<vector<int>>&mat){
        int r = mat.size();
        int c = mat[0].size();
        if(i == r)
            return 0;
        if(j<0 or j>=c)
            return INT_MAX;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        int op1 = solve(i+1,j,mat);
        int op2 = solve(i+1,j+1,mat);
        int op3 = solve(i+1,j-1,mat);
        
        return dp[i][j]= mat[i][j] + min(op1,min(op2,op3));
    }
};