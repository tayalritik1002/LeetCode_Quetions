class Solution {
public:
long long fact(int n,int r){
     long long res = 1;

   for (int i = 0; i <r ; i++) {
        res = res * (n-i);
        res=res/(i+1);
    }

return res;

}
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>ans;
  

        for(int row=0;row<numRows;row++){
            vector<int>curr;
            for(int col=0;col<=row;col++){
                long long curr_ans= fact(row,col);
                curr.push_back(curr_ans);

            }
            ans.push_back(curr);
        }
        return ans;  
    }
};