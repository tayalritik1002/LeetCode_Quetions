class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // this question to take three steps to reaching answer

        // step 1: find that place where longer profile match
        // means where a[i]<a[i+1]; if no then return reverse of input

        int ind=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ind=i;
                break;
            }
        }
        if(ind==-1){reverse(nums.begin(),nums.end());
        return ;
        }

        // step 2: find then value from end to till ind 
        // that is grater than  nums[ind] but smallest one so that you stay close
        // then swap ind's value to that value
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){swap(nums[i],nums[ind]);
            break;}
        }
        // step3: reverse the araay from ind+1 to the end;

        reverse(nums.begin()+ind+1,nums.end());
    }
};