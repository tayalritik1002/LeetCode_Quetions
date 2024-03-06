class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s, e=0;
        int len=INT_MAX;
        int sum=0;

        while(e<nums.size()){
            // include elemet in sum
            sum+=nums[e];
            // check if we reach thre the target and minimize the window size
            while(sum>=target){
                len=min(len,e-s+1);
                sum-=nums[s++];
            }
            e++;
        }
        if(len==INT_MAX)return 0;
        else return len;
        
    }
};