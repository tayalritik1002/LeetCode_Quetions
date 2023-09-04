class node{
    public:
    int data;
    int row;
    int col;

    node(int d, int r, int c){
        data=d;
        row=r;
        col=c;
    }

};
class compare{
    public:
    bool operator()(node*a,node*b){
        return a->data > b->data;
    }

};
class Solution {
public:

    vector<int> smallestRange(vector<vector<int>>& nums) {

        int mini=INT_MAX;
        int maxi= INT_MIN;
        priority_queue<node*, vector<node*>, compare>minheap;

        int k=nums.size();
        // every first element of each list push into minheap
        for(int i=0;i<k;i++){
            int element= nums[i][0];
             mini=min(mini,element);
             maxi= max(maxi,element);
            minheap.push(new node(element,i,0));
        }

        // intialize answer variable
        int ansStart=mini;
        int ansEnd=maxi;

        while(!minheap.empty()){
            // three steps
            //1-> process top element of minheap
            node* top=minheap.top();
            int topelement= top->data;
            int topcol=top->col;
            int toprow=top->row;
            minheap.pop();
            // we know that top of min heap is samllest element then update mini
            mini=topelement;

            // uptate answer
            int currRange = maxi-mini;
            int ansRange = ansEnd-ansStart;

            if(currRange < ansRange){
                ansStart=mini;
                ansEnd=maxi;
            }

            // check for new element in current list
            if(topcol+1 <nums[toprow].size()){
                // update maxi value
                maxi = max(maxi,nums[toprow][topcol+1]);
                node* newNode = new node(nums[toprow][topcol+1],toprow,topcol+1);
                // push into min heap
                minheap.push(newNode);
            }
            else{
                // there is no element present in curr list 
                break;
            }

        }

        vector<int>ans;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;


        
    }
};