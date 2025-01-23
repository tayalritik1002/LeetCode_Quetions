class Solution {
public:
int solve(vector<int>& bloomDay, int mid, int k){ 
    int bouquet=0;
    int adjacent_flower=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=mid)adjacent_flower++;
        else adjacent_flower=0;



        if(adjacent_flower==k){
            bouquet++;
            adjacent_flower=0;
        }
    }
    return bouquet;

}
    int minDays(vector<int>& bloomDay, int m, int k) {
        int sd=1;
        int ed=*max_element(bloomDay.begin(),bloomDay.end());
        int result=-1,mid;
        while(sd<=ed){
            mid=sd+(ed-sd)/2;
            if(solve(bloomDay,mid,k)>=m){
                result=mid; 
                ed=mid-1;
            }
            else sd=mid+1;
        }

        return result;
        
    }
};