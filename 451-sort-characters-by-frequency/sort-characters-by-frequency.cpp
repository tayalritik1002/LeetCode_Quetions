class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>charMap;
        int n1 = s.size();
        for(char c : s){
            charMap[c]++;
        }
        string result = "";
        priority_queue<pair<int,char>> pq;
        for(auto& it:charMap){
            pq.push({it.second, it.first});
        }
        while(!pq.empty()){
            auto[freq,ch] = pq.top();
            pq.pop();
            result.append(freq,ch);
        }
        return result;
    }
};