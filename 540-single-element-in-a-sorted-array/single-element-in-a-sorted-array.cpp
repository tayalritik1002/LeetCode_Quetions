class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(s==e)return nums[mid];
            if(mid%2==0){
                if(nums[mid]==nums[mid+1])s=mid+2;// we stand on left side and go to right
                else e=mid;
            }
            else //mid is odd
            {
                if(nums[mid]==nums[mid-1]) s=mid+1;
                else e=mid-1;
            }
        }
        return -1;
    }
};