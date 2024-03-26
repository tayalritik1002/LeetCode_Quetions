class Solution {
public:
    vector<int> findSmallestPositive(vector<int>& nums) {
        int n = nums.size(); 
        int mini = INT_MAX; 
        int maxi = INT_MIN;
        vector<int> ans;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0) {
                mini = min(nums[i], mini);
                maxi = max(maxi, nums[i]);
            }
        }
        
        ans.push_back(mini);
        ans.push_back(maxi);
        return ans;
    }

    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int> p = findSmallestPositive(nums);
        
        if (p[0] == INT_MAX && p[1] == INT_MIN) {
            return 1; 
        }
        if(p[0]==0 && p[1]==0){
            return 1;

        } 

        // if(p[0]==0 && p[1]>1)return 1;

        // if(p[0]==0 && p[1]==1)return 2;

        if(p[0]>1 && p[1]>1)return 1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(int i=p[0];i<=p[1];i++){
            if(mp.find(i)!=mp.end())continue;
            return i;
        }

        return p[1]+1;
        
    }
};
