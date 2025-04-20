class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mele=nums[0];
        int n=nums.size();
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==mele)count++;
            else count--;
            if(count==0){
                count=1;
                mele=nums[i];
            }
        }
        return mele;
        
    }
};