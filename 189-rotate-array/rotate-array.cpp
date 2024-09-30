class Solution {
public:
void reverse(vector<int>& nums, int st,int end){
    while(st<end){
        swap(nums[st++],nums[end--]);

    }
}
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);

        
    }
};