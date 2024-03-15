class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> cou;
        cou[0] = 1;
        int curr_sum = 0;
        int total_subarrays = 0;

        for (int num : nums) {
            curr_sum += num;
            if (cou.find(curr_sum - goal) != cou.end()) {
                total_subarrays += cou[curr_sum - goal];
            }
            cou[curr_sum]++;
        }

        return total_subarrays;
        
    }
};