class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        // first xor between arrays element 
        for(int i=0;i<n;i++){
            xr=xr^nums[i];
        }
        for(int i=0;i<=n;i++){
            xr=xr^i;        }
             return xr;
    }
   
};