class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int stops=0;
        int dist=0;
        int i=0;
        int fuel=startFuel;
        priority_queue<pair<int,int>>maxHeap;


        while(true){
            while(i<stations.size()){
                if(stations[i][0] <= dist+fuel){
                    maxHeap.push({stations[i][1],stations[i][0]});
                }
                else break;
                ++i;
            }

            // travel with full fuel
            dist+=fuel;
            fuel=0;
            // reached or not
            if(dist>=target)break;

            // if No fuel station to reach
            if(maxHeap.empty()){
                stops=-1;
                break;
            }

            // refuel car and readjust distance and fuel based on the distance traveled and
            // fuel use till that station

            auto top=maxHeap.top();
            fuel = (dist-top.second)+top.first;  // jaha tak hum phuche-jaha hame refuel karana hai 
            //uski position + jitna uske pass fuel hai
            dist=top.second; // ab distace vo hogi jaha refuel hua hai
            maxHeap.pop(); // jo station use kar liya usko bhar nikalo
            ++stops;

            
        }
        return stops;
        
    }
};