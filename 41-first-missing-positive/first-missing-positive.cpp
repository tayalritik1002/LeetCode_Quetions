class Solution {
public:
  

    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(0);
        // replace to all positive to thier correct position coresponding index

        for(int i=0;i<n;i++){
            while(nums[i]>0 && nums[i]<=n && nums[i]!=nums[nums[i]])swap(nums[i],nums[nums[i]]);
        }
        // iterate the loop fro 1 to n if any element not present then return 
        for(int i=1;i<=n;i++){
           if( nums[i]!=i)return i;
        }

        return n+1;   
        
    }
};
