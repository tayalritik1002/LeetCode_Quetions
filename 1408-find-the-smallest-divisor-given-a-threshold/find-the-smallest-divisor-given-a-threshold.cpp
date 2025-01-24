class Solution {
public:
int solve(vector<int>& nums, int mid){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum=sum+ceil(floor(nums[i])/floor(mid));
    }
    return sum;
  }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int s=1;
        int e=*max_element(nums.begin(),nums.end());
        int mid;
        int ans;
        while(s<=e){
            mid=s+(e-s)/2;
            if(solve(nums,mid)<=threshold){
                ans=mid;
                e=mid-1;
            }
            else s=mid+1;
        }
        return ans;
        
    }
};