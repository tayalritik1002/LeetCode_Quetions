class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        // for(int i=0;i<n;i++){
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }

        // reverse the array
        for(int i=0;i<n;i++){
           int s=0; int e=matrix[i].size()-1;
           while(s<e){
            swap(matrix[i][s],matrix[i][e]);
            s++; e--;
           }
        }
        
    }
};