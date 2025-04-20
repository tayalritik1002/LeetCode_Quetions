#include<bits/stdc++.h>
class Solution {
public:
int max(int a,int b){
    if(a>b)return a;
    else return b;
}
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(auto i: nums)st.insert(i);
        int ans=0;
        for(auto i:st){
            if(st.find(i-1)==st.end()){
                int count=1;
                while(st.find(i+1)!=st.end()){
                    count++;
                    i++;
                }
                 ans=max(ans,count);
            }
           
        }
        return ans;
    }
};