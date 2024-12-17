#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while (k != 0) {
            int minimum = nums[0]; // Initialize the minimum value as the first element
            int index = 0;         // Track the index of the minimum element

            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] < minimum) { // Check for the minimum element in the array
                    minimum = nums[i];
                    index = i;
                }
            }
            nums[index] *= multiplier; // Update the minimum element by multiplying it
            k--; 
        }
        return nums; 
    }
};