class node{
    public:
    char data;
    int count;

    node(int d,int c){
        data = d;
        count=c;
    }

};

class compare{
    public:
    bool operator()(node a, node b){
        return a.count<b.count;
    }

};

class Solution {
public:
    string reorganizeString(string s) {

        // create mapping
        map<char,int>mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }

        priority_queue<node,vector<node>, compare>maxHeap;

        for(auto i:mp){
            node temp(i.first,i.second);
            maxHeap.push(temp);
        }

        string ans="";

        while(maxHeap.size()>1){
            node first=maxHeap.top();
            maxHeap.pop();
            node second= maxHeap.top();
            maxHeap.pop();

            ans+=first.data;
            ans+=second.data;

            first.count--; second.count--;

            if(first.count) maxHeap.push(first);
            if(second.count) maxHeap.push(second);

        }

        if(maxHeap.size()==1){
            node temp=maxHeap.top();
            if(temp.count==1){
                ans+=temp.data;
            }
            else{
                ans="";
            }
        }

        return ans;
        
    }
};