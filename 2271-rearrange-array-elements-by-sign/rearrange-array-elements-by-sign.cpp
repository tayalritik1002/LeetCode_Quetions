class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int pos=0;// at even index
        int neg=1;// at odd index
        vector<int>ans(nums.size());

        // we iterate over each element if positiive then place at postive index which is even if elemnt is negative thern place it negative index which is odd


        for(int a:nums){
            if(a>0){
                ans[pos]=a;
                pos+=2;
            }
            else {
                ans[neg]=a;
                neg+=2;
            }
            
        }
        return ans;
        
    }
};