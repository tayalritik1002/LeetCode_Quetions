class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        if(nums[n-1]<target)return n;
        int s=0;int e=n-1; int ans=n;int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]>=target){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;


        
    }
};