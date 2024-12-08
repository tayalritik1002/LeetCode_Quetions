class Solution {
public:
    void moveZeroes(vector<int>& arr) {
     int count=0; int n=arr.size();
     for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
     }
    
       
        
    }
};