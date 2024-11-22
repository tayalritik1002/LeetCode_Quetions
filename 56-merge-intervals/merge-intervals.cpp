class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {

        vector<vector<int>>ans;
        
        sort(arr.begin(),arr.end());
        int f=arr[0][0];
        int s=arr[0][1];
        int i=1;
        while(i<arr.size()){
            if(arr[i][0]<=s){ 
                s=max(s,arr[i][1]);    
            }
            else{
                ans.push_back({f,s});
                f=arr[i][0];
                s=arr[i][1];
            }
            i++;
        }
        ans.push_back({f,s});
        return ans;
        
    }
};