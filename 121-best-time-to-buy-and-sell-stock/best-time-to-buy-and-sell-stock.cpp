class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int mini=arr[0];
        int answer=0;
        // if(n==1)return 0;

        for(int i=1;i<n;i++){
            mini=min(mini,arr[i]);
            answer=max(answer,arr[i]-mini);

        }
        return answer;
    }
};