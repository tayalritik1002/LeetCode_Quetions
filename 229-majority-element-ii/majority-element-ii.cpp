class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;int n=nums.size();

        int mini=n/3+1;
        unordered_map<int,int>mp;


        for(int i=0;i<n;i++){
            mp[nums[i]]++;

            if(mp[nums[i]]==mini){
                ans.push_back(nums[i]);
            }

            if(ans.size()>=2)break;

        }  
        return ans;      
    }
};