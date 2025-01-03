class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;
        unordered_set<int>st;
        int ans=0;
        for(auto i:nums){
            st.insert(i);
        }
        for(auto i:st){
            if(st.find(i-1)==st.end()){
                int c=1;
                int increase_curr=i;
                while(st.find(increase_curr+1)!=st.end()){
                    c++;
                    increase_curr++;
                    
                }
                ans=max(ans,c);
            }
        }
        return ans;
        
        
    }
};