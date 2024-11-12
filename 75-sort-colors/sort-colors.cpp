class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size()-1;
        int zero=0;int one=0;int two=n;
        while(one<=two){
            if(nums[one]==0)swap(nums[zero++],nums[one++]);
            else if(nums[one]==1)one++;
            else swap(nums[one],nums[two--]);
        }

        
    }
};