class Solution {
public:
    int missingNumber(vector<int>& nums) {
        bool flag=false; int i;


        for( i=0;i<=nums.size();i++){
            for(int j=0;j<nums.size();j++){
               if(i==nums[j]){
                flag=true;
                break;
               }
               else flag=false;
            }
            if(!flag)break;
            cout<<flag;
        }
        return i;
    
    }
        
    
};