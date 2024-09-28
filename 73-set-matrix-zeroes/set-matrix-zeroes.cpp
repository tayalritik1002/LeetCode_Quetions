class Solution {
public:
    void for_row(vector<vector<int>>& matrix,int row,int curr_col){
        for(int i=0;i<row;i++){
            if(matrix[i][curr_col]!=0){
                matrix[i][curr_col]=-10;
            }
        }
    }
     void for_col(vector<vector<int>>& matrix,int col,int curr_row){
        for(int i=0;i<col;i++){
            if(matrix[curr_row][i]!=0){
                matrix[curr_row][i]=-10;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        for(int curr_row=0;curr_row<row;curr_row++){
            for(int curr_col=0;curr_col<col;curr_col++){
                if(matrix[curr_row][curr_col]==0){
                    for_row(matrix,row,curr_col);
                    for_col(matrix,col,curr_row);
                }

            }
        
        }

       for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==-10){
                    matrix[i][j]=0;
                }

            }
       }
        
    }
};