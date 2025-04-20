class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int s=0,m=0; int l=n-1;
        while(m<=l){
            if(nums[m]==0){swap(nums[s],nums[m]); s++; m++;}
            else if(nums[m]==1)m++;
            else{
                swap(nums[m],nums[l]);
                l--;
            }
        }

        
    }
};