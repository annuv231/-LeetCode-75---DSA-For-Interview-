class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int x=matrix[0][0];
        int col=matrix[0].size();
        int row=matrix.size();
        cout<<row<<col<<endl;
        int n=min(row,col);
        for(int i=1;i<row;i++){
          for(int j=1;j<col;j++){
              if(matrix[i][j]!=matrix[i-1][j-1]){
                  return false;
              }
          }
        }
        return true;
    }
};