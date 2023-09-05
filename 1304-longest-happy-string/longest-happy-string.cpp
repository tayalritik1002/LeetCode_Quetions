class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int,char>>maxheap;

        if(a>0) maxheap.push({a,'a'});
        if(b>0) maxheap.push({b,'b'});
        if(c>0) maxheap.push({c,'c'});

        string ans="";
        while(maxheap.size()>1){
            int topFreq1=maxheap.top().first;
            char topChar1=maxheap.top().second;
            maxheap.pop();
            // push topChar two times into answer if exixts two tym nahi to one tym

            if(topFreq1>1){
                ans+=topChar1;
                ans+=topChar1;
                topFreq1-=2;
            }
            else{
                ans+=topChar1;
                topFreq1-=1;
            }


             // push topChar two times into answer if exixts two tym nahi to one tym
             int topFreq2=maxheap.top().first;
            char topChar2=maxheap.top().second;
            maxheap.pop();
           

            if(topFreq2>1 && topFreq2>=topFreq1){
                ans+=topChar2;
                ans+=topChar2;
                topFreq2-=2;
            }
            else{
                ans+=topChar2;
                topFreq2-=1;
            }
            if(topFreq1>0) maxheap.push({topFreq1,topChar1});
            if(topFreq2>0) maxheap.push({topFreq2,topChar2});
        }

        while(!maxheap.empty()){
            int topFreqLeft=maxheap.top().first;
            char topCharLeft=maxheap.top().second;
            maxheap.pop();
            if(topFreqLeft>1){
                ans+=topCharLeft;
                ans+=topCharLeft;
                topFreqLeft-=2;
            }
            else{
                ans+=topCharLeft;
                topFreqLeft-=1;

            }
        }

        return ans;
   
    }
};