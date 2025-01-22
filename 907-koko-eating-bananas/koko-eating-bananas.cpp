class Solution {
public:
long long solve(vector<int>& p, int mid){
    int n=p.size();
    long long  totalh=0;
    for(int  i=0;i<n;i++){
        totalh=totalh+ceil(floor(p[i])/floor(mid));   
    }
    return totalh;
}
    int minEatingSpeed(vector<int>& p, int h) {
        int s=1;
        int e=*max_element(p.begin(), p.end());

        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            long long totalhours=solve(p,mid);
             if(totalhours>h)s=mid+1;
            else e=mid-1;
        }
        return s;
        
    }
};