class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {

        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
        }
        int ans=maxi; int ans2=0; 
        while(k--){
            ans2+=ans;
            ans+=1;
        

        }
        return ans2;
        
    }
};