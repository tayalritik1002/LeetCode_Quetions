class Solution {
public:
    void rotate(vector<int>& nums, int j) {
        int n=nums.size();
        int k= j%n;
        vector<int>arr(n); int l=k; int p=n;
        if(k<n){
        for(int i=1;i<=k;i++){
            arr[l-1]=nums[p-1];
            p--;
            l--;
        }
        l=k;
        for(int i=0;i<n-k;i++){
            arr[l]=nums[i];
            l++;
        }


        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
        }
        
    }
};