class Solution {
public:
    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m,vector<int>(n,0));
       for(int row=0;row<m;row++){
        for(int col=0;col<n;col++){
            if(row==0 || col==0){
                dp[row][col]=1;
            }else{
            dp[row][col]=dp[row-1][col]+dp[row][col-1];}
        }
       }
       return dp[m-1][n-1];
    }
    int solve(int row,int col,int m,int n,vector<vector<int>> &dp){
        if(row==m-1 && col==n-1) return 1;
        if(row>=m || col>=n) return 0;
        if (dp[row][col] != -1) return dp[row][col]; 
        dp[row][col]= solve(row+1,col,m,n,dp) + solve(row,col+1,m,n,dp);
        return dp[row][col];

    }
};
