class Solution {
public:
vector<int>generate_rows(int n){
    long long ans=1;
    vector<int>row;
    row.push_back(1);
    for(int col=1;col<n;col++){
        ans=ans*(n-col);
        ans=ans/col;
        row.push_back(ans);

    }
    return row;

}
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>ans2=generate_rows(i);
            ans.push_back(ans2);
        }
        return ans;
    }
};