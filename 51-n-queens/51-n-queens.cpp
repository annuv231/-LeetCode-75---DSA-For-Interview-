class Solution {
    
    //method 1: without using hashing   
// public:
//     bool isSafe(vector<string>&board,int row,int col,int n){
//         int orgrow=row;
//         int orgcol=col;
//         while(row>=0 &&col>=0){
//             if(board[row][col]=='Q'){
//                 return false;
//             }
//             row--;
//             col--;
//         }
//         row=orgrow;
//         col=orgcol;
//         while(row<n &&col>=0){
//             if(board[row][col]=='Q'){
//                 return false;
//             }
//             row++;
//             col--;
//         }
//         row=orgrow;
//         col=orgcol;
//         while(col>=0){
//             if(board[row][col]=='Q'){
//                 return false;
//             }
//             col--;
//         }

        
//         return true;
//     }
// public:
//     void solve(vector<vector<string>>&ans,vector<string>&board,int col,int n){
//         if(col==n){
//             ans.push_back(board);
//             return;
//         }
//         for(int row=0;row<n;row++){
//             if(isSafe(board,row,col,n)){
//                 board[row][col]='Q';
//                 solve(ans,board,col+1,n);
//                 board[row][col]='.';
//             }
//         }
//     }
public:
    void solve(vector<vector<string>>&ans,vector<string>&board,int col,int n,vector<int>&rows,vector<int>&downDiagonal,vector<int>&upperDiagonal){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(rows[row]==0&&upperDiagonal[n-1+col-row]==0 && downDiagonal[row+col]==0){
                board[row][col]='Q';
                rows[row]=1;
                upperDiagonal[n-1+col-row]=1;
                downDiagonal[row+col]=1;
                solve(ans,board,col+1,n,rows,downDiagonal,upperDiagonal);
                rows[row]=0;
                upperDiagonal[n-1+col-row]=0;
                downDiagonal[row+col]=0;
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        
        //using hashing to track placed queen
        vector<int>rows(n,0);
        vector<int>downDiagonal(2*n-1,0);
        vector<int>upperDiagonal(2*n-1,0);
        for(int i=0;i<n;i++){
            board[i]=s;      
        }
        solve(ans,board,0,n,rows,downDiagonal,upperDiagonal);
        
        return ans;
    }
};