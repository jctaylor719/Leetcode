# Documentation

## Introduction

When first considering a problem, I track what is given. In this case, the array ```nums[]``` was given, so there was no need to create a function that generates an array with a random size and random numbers at each index. 

Next, I consider any potential errors that could arise. 
+ What if none of the numbers in the array add to the target number?
+ What if multiple indexes add to the target number?
  + **Example:** ```Target = 4, nums = [1, 1, 2]```
+ What if there are multiple solutions?

With this in mind, I create the worst-case solution. We iterate through each number in the list and test if any combination adds to the target number:

```
for(int i = 0; i < list.size(); i++) {
  for (int j = i + 1; j < list.size(); j++) {
    if(i + j == target) {
      return {i, j};
    }
  }
}
```

## Performance

The time complexity of the worst case is O(n^2). 

The space complexity is O(1), because it uses a constant amount of extra space, irrespective of the input size.

When thinking of ways to optimize this problem, I consider different data structures. I decided to use a hash map for this problem.

## New Approach: Hash Map

Instead of comparing each number in the list, what if we iterated through the list, and stored the complement of each number (and its index) in the hash map?

For example, consider the array ```nums = [3, 6, 2, 5, 1]``` with a target number of 7. 

The complement of ```nums[0]``` is 4, because 7 - 3 = 4. We can then iterate through the rest of the list to see if there is a 4

Since there is no 4 in the list, the map is now {3: 0}

Now, let's see what this looks like implemented:

```
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
```

Using this approach, we get a new time complexity of O(n) and space complexity of O(n).

This was made using C++. ```std::map``` utilizes the ```#include <map>``` library. 

We use the ```count()``` function to search the container for elements with a key equivalent to k and return the number of matches (1 or 0)

More information about maps can be found [here](https://cplusplus.com/reference/map/map/) 

## Improvements

Now that the approach is optimized, we can consider the error handling concerns we thought of earlier.

We've already implemented a 'No Solution' case, and the hash map technique solves the multiple-solution problem for us.

But what about ThreeSum? FourSum? How are these related? This project could definitely be improved to cover an n range of sums. 

While this was a pretty easy assignment, I like to find new ways it could be improved. I would like to work on an NSum project in the near future. 
