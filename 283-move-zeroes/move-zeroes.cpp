class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr(n);
        int count_zero=0;
        for(int a:nums){
            if(a==0)count_zero++;
        }
        int a=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                arr[a]=nums[i];
                a++;
            }
            
        }
    for(int i=1;i<=count_zero;i++){
        arr.push_back(0);
    }
    for(int i=0;i<n;i++){
        nums[i]=arr[i];
    }
       
        
    }
};