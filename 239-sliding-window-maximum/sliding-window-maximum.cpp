class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        // we declare a maxHeap which contain value and index of curr element of array
        priority_queue<pair<int,int>>maxHeap;// pair contain <value,index> 
        //according to value insert in maxHeap

        vector<int>ans;

        for(int i=0;i<k;i++){
            maxHeap.push({nums[i],i});
        }
        // push maxElement into ans vector
        ans.push_back(maxHeap.top().first);

        for(int i=k;i<nums.size();++i){
            maxHeap.push({nums[i],i});
            // check maxHeap ka top old window se to nhi h
            while(maxHeap.top().second <= i-k){
                maxHeap.pop();
            }

            // push into answer
            ans.push_back(maxHeap.top().first);
        }
        return ans;
    }
};