class Solution {
public:
    int halveArray(vector<int>& nums) {
        // step 1-> we know that if we reduce maxElement every tym then we reduce array sum quikcly
        // create max heap
        priority_queue<double> maxHeap;
        // step 2=-> fistly we push all elements of array into maxHeap
        // step 3-> calculate the sum of array
          double initialSum=0;
        for(auto i:nums){
            initialSum+=i;
            maxHeap.push(i);
        }

        double halfOfInitialSum= initialSum/2;
        //float currSum = 0;
        int count=0;
        while(initialSum>halfOfInitialSum){
            double maxelement=maxHeap.top();
            maxHeap.pop();
            // After processing Maxelement
            double currElement= maxelement/2;
            count++;
            maxHeap.push(currElement);

            initialSum-=currElement;
            


        }
        return count;



        
    }
};