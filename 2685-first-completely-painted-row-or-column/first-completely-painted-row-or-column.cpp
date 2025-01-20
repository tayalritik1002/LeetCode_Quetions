class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        map<int,pair<int,int>> mp;
        vector<int> row(m,0);
        vector<int> col(n,0);
        int temp;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int value = mat[i][j];
                mp[value].first = i;
                mp[value].second = j;
            }
        }
        for(int i=0;i<arr.size();i++){
            temp = mp[arr[i]].first;
            row[temp]++;
            if(row[temp]==n){
                return i;
            }
            temp = mp[arr[i]].second;
            col[temp]++;
            if(col[temp]==m){
                return i;
            }          
        }
       return m*n-1; 
    }
};