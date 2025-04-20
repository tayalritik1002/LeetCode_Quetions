class Solution {
public:
void change_row(vector<vector<int>>& matrix,int row){
    for(int i=0;i<matrix[0].size();i++){
        if(matrix[row][i]!=0){
            matrix[row][i]=-10;
        }
    }
}
void change_col(vector<vector<int>>& matrix,int col){
    for(int i=0;i<matrix.size();i++){
        if(matrix[i][col]!=0){
            matrix[i][col]=-10;
        }
    }
}
    void setZeroes(vector<vector<int>>& matrix) {

        int row_size=matrix.size();
        int col_size=matrix[0].size();
        for(int i=0;i<row_size;i++){
            for(int j=0;j<col_size;j++){
                if(matrix[i][j]==0){
                change_row(matrix,i);
                change_col(matrix,j);
             }
            }
        }

        for(int i=0;i<row_size;i++){
            for(int j=0;j<col_size;j++){
                if(matrix[i][j]==-10){
                    matrix[i][j]=0;
                }
            }
        }
        
    }
};