class Solution {
public:
#define ll long long
    long long minimumDifference(vector<int>& nums) {

        ll n=nums.size()/3;
        // initialize the prefix and suffix vector
        vector<ll>prefix(nums.size(),-1);
        vector<ll>suffix(nums.size(),-1);


        ll sum =0;
        // create maxheap
        priority_queue<ll>maxheap;
        for(int i=0;i<nums.size();++i){
            sum+=nums[i];
            maxheap.push(nums[i]);
            
            // if maxheap contain greater than n elelment
            // then pop max element in the maxheap
            if(maxheap.size()>n){
                sum-=maxheap.top();
                maxheap.pop();
            }
            if(maxheap.size()==n){
                prefix[i]=sum;
            }

        }
        sum=0;
        // create minheap
        priority_queue<ll,vector<ll>,greater<ll>>minheap;
        for(int i=nums.size()-1;i>=0;--i){
            sum+=nums[i];
            minheap.push(nums[i]);
            
            // if maxheap contain greater than n elelment
            // then pop max element in the maxheap
            if(minheap.size()>n){
                sum-=minheap.top();
                minheap.pop();
            }
            if(minheap.size()==n){
                suffix[i]=sum;
            }

        }
        ll ans=LONG_LONG_MAX;
        for(int i=n-1;i<2*n;++i){
            ans=min(ans,prefix[i]-suffix[i+1]);
        }

        return ans;

        
    }
};