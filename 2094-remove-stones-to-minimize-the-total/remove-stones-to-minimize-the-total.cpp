class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        // step 1=> create maxheap because we know in maxheap we find maxeElement in constant tym
        priority_queue<int>maxHeap;

        // step 2=> push all piles into maxheap 
        for(int i=0;i<piles.size();i++){
            maxHeap.push(piles[i]);
        }

        // we know that if we minimize the stone then process first always maxElement
        while(k--){
            int maxElement=maxHeap.top();
            maxHeap.pop();
            int afterProcessElement= maxElement-floor(maxElement/2);
            // push afterProcessEment into maxheap;
            maxHeap.push(afterProcessElement);
        }

        int sum =0;
        while(!maxHeap.empty()){
            int temp=maxHeap.top();
            maxHeap.pop();
            sum+=temp;

        }
        return sum;
        
    }
};