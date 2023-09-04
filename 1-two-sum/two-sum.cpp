class Solution {
public:
static bool cmp(pair<int,int>a,pair<int,int>b){
    return a.first <b.first;
}
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++){
            int value=nums[i];
            int index=i;
            v.push_back({value,index});
        }
        sort(v.begin(),v.end(),cmp);
        int s=0;
        int e=v.size()-1;
        while(s<e){
            if(v[s].first+v[e].first==target){
                ans.push_back(v[s].second);
                ans.push_back(v[e].second);
                break;
            }
            else if(v[s].first+v[e].first>target)e--;
            else s++;
        }
        return ans;

    }
};