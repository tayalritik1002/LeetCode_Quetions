class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          int row=matrix.size();
        int col=matrix[0].size();
        int srow=0;
        int erow=row-1;
        int scol=0;
        int ecol=col-1;
        int total=row*col;
        int count=0;
        vector<int>ans;
        while(count<total){
            for(int index=srow;index<=ecol && count<total;index++ ){
                ans.push_back(matrix[srow][index]); count++;
            }
            srow++;
             for(int index=srow;index<=erow && count<total;index++ ){
                ans.push_back(matrix[index][ecol]); count++;
            }
            ecol--;
             for(int index=ecol;index>=scol && count<total;index-- ){
                ans.push_back(matrix[erow][index]); count++;
            }
            erow--;
             for(int index=erow;index>=srow && count<total;index-- ){
                ans.push_back(matrix[index][scol]); count++;
            }
            scol++;
        }

        return ans;
    }
};