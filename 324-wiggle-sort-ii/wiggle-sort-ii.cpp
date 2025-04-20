class Solution {
public:
    void wiggleSort(vector<int>& nums) {
         vector<int>ans=nums ;

        sort(ans.begin(),ans.end());
       
        int n=nums.size();
        int mid=(n-1)/2;
        int end=n-1;
        for(int i=0;i<n;i++){
            nums[i]= (i%2==0) ? ans[mid--] :ans[end--];
        }
    
        
    }
};