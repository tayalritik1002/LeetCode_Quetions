class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        unordered_set<int>s1;
        unordered_set<int>s2;
        vector<int>ans;
        for(int i=0;i<num1.size();i++){
            s1.insert(num1[i]);
        }
        for(int i=0;i<num2.size();i++){
            if(s1.contains(num2[i]))s2.insert(num2[i]);
        }
        // unordered_map<int,int>mp;
        // for(auto i:s1){
        //     mp[i]++;
        // }
        //  for(auto i:s2){
        //     mp[i]++;
        // }
        for(auto i:s2){
            
                ans.push_back(i);

        }
        return ans;
        
        
    }
};