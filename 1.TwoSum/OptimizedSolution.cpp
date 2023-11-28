class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create the hashmap 
        map<int, int> numMap;

        // For all elements in the array, 
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the number we're looking for
            int complement = target - nums[i];
            // If the complement exists, 
            if (numMap.count(complement)) {
                // Return answer indexes
                return {numMap[complement], i};
            }
            // Add to hash table
            numMap[nums[i]] = i;
        }
        // No solution
        return {};
    }
};
