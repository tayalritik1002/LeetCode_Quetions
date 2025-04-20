class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int srow=0;
        int erow=row-1;
        int scol=0, ecol=col-1;
        int total=row*col;
        int count=0;
        vector<int>ans;
        while(total>count){
            for(int i=srow;total>count && i<=ecol;i++){
                ans.push_back(matrix[srow][i]); count++;
            }
            srow++;
            for(int i=srow;i<=erow && total>count;i++){
                ans.push_back(matrix[i][ecol]);count++;
            }
            ecol--;
            for(int i=ecol;i>=scol && total>count;i--){
                ans.push_back(matrix[erow][i]); count++;

            }
            erow--;
            for(int i=erow;i>=srow && total>count;i--){
                ans.push_back(matrix[i][scol]);count++;
            }
            scol++;


        }
        return ans;
        
    }
};