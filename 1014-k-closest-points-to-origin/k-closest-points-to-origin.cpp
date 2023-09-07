class myCompare{
    public:
    bool operator()(pair<int,int>&a,pair<int,int>&b){
        int distA= a.first*a.first + a.second*a.second;
         int distB= b.first*b.first + b.second*b.second;
         return distA > distB;
    }
};
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,myCompare>minHeap;

        for(auto i:points){
            minHeap.push({i[0],i[1]});
        }

        vector<vector<int>>ans;
        while(!minHeap.empty() && k--){
            auto minimumDistance=minHeap.top();// Always minimum distance top on the minHeap
            ans.push_back({minimumDistance.first,minimumDistance.second});
            minHeap.pop();
        }
        return ans;
    }
};