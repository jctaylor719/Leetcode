# Documentation

## Introduction

While considering this problem, I was quickly able to come up with the Worst-Case solution. The median is the sum of all the numbers in an array divided by it's length. So, I could make a for-loop that iterates through the array and adds each ```nums[i]``` to an ```int sum```. By dividing by ```nums.size()```, we can find the median. Applying this to both arrays, we can add the two medians together and divide them by two to get the final answer. However, this has a time complexity of O(N + M), which is not ideal. So, I considered a different approach.

## Alternative Methods

I have two binary search solutions, because I believe there are different conclusions you could make for the phrase "the median of the two sorted arrays". 

The first solution (```BinarySearch1.cpp```) defines it as follows: Find the median of the first array. Find the median of the second array. These two medians create their own array: ```[x, y]```. We then find the median of this new array ```[x, y]```. This was my first impression of the problem, however I would soon learn this was not the intended solution.

The second solution (```BinarySearch2.cpp```) *correctly* defines it as follows: Find the median of the combined, sorted array. 

I was able to discover the existence of these differing solutions through test cases. My first solution did not pass the test case:

+ ```nums1 = [1, 3]```
+ ```nums2 = [2, 7]```
+ **Output:** ```3.25```
+ **Expected:** ```2.5```

This is because the median of ```nums1``` is 2, and the median of ```nums2``` is ```4.5. (2 + 4.5) / 2 = 3.25```
However, the median of ```[1, 2, 3, 7]``` is ```(2 + 3) / 2 = 2.5```

Thus, I had to create a new solution that properly accounted for this issue. 

## Binary Search

A binary search is an efficient algorithm used to locate a specific item in a sorted collection, such as an array. The key idea behind binary search is to repeatedly divide the search space in half until the target element is found. It's important to note that the array must be sorted for binary search to work correctly. If the array is unsorted, binary search won't produce accurate results.

Here's a step-by-step description of how binary search works:

1. **Initial Setup:**
   - Binary search is applicable to a sorted collection, typically an array.
   - Define two pointers: ```low``` and ```high``` initially pointing to the start and end of the array.

2. **Midpoint Calculation:**
   - Calculate the midpoint between ```low``` and ```high```: ```mid = (low + high) / 2```

3. **Comparison:**
   - Compare the element at the midpoint (```arr[mid]```) with the target value.
   - If they are equal, the search is successful, and the index (or the element itself) is returned.
   - If the target is less than ```arr[mid]```, the search continues in the left half. Update ```high = mid - 1```
   - If the target is greater than ```arr[mid]```, the search continues in the right half. Update ```low = mid + 1```

4. **Repeat:**
   - Repeat steps 2 and 3 until the target is found or the search space is empty (```low > high```).

Binary search has a time complexity of O(log N), where N is the number of elements in the array. This logarithmic complexity makes it significantly faster than linear search for large datasets.

## Solution

We first find the size of ```nums1``` and ```nums2```. We then find the combined size of these arrays. 

For simplicity's sake, I also ensure that ```nums1``` is the smaller array.

We then half the combined size of the array (round down if it's not a whole number). Let's call this ```n```

The left partition for ```nums1``` (L1) is ```nums[0] - nums[n]```

The left partition for ```nums2``` (L2) is ```n - L1```

If L2's maximum is <= R1's minimum **AND** L1's maximum is <= R2's minimum:
+ Find the maximum between L1 and L2
+ Find the minimum between R1 and R2
  + Sum these two values and divide by two

Otherwise, if L1's maximum > R2's minimum:
+ Shift left pointer to 1 + middle value
+ Recompute middle value, rounding down

