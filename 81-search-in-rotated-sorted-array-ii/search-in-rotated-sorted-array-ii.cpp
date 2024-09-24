class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int  s=0;
        int e=arr.size()-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(arr[mid]==target)return true;
            if(arr[s]==arr[mid] && arr[mid]==arr[e]){
                s++;e--;
                continue;
            }
            // check left sorted
            if(arr[s]<=arr[mid]){
                if(arr[s]<=target && arr[mid]>=target){
                    e=mid-1;
                }
                else s=mid+1;

            }
            // check right part sorted
            else{
                if(arr[mid]<=target && arr[e]>=target)s=mid+1;
                else e=mid-1;

            }
        }
        return false;
        
    }
};