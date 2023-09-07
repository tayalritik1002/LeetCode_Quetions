class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {

        int ans=-1; int minDist=INT_MAX;

        for(int i=0;i<points.size();i++){
            int a= points[i][0];
            int b= points[i][1];
            if(a==x || b==y){
                int distance= abs(x-a) + abs(y-b);
                if(distance<minDist){
                    minDist=distance;
                    ans=i;
                }
            }
        }
        return ans;
  
    }
};