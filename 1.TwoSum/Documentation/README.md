# Documentation

## My Solution

### Introduction

When first considering a problem, I track what is given. In this case, the array ```nums[]``` was given, so there was no need to create a function that generates an array with a random size and random numbers at each index. 

Next, I consider any potential errors that could arise. 
+ What if none of the numbers in the array add to the target number?
+ What if multiple indexes added to the target number?
  + **Example:** ```Target = 4, nums = [1, 1, 2]```
+ What if there are multiple solutions?

With this in mind, I create the easiest solution. We iterate through each number in the list and test if any combination adds to the target number:

```
for(int i = 0; i < list.size(); i++) {
  for (int j = i + 1; j < list.size(); j++) {
    if(i + j == target) {
      return {i, j};
    }
  }
}
```

### Error Handling

Now that I have a simple solution created, I adjust my code to accomodate the potential errors I thought of earlier. 

My first issue can easily be fixed by returning "No Solution" after the loop. 

The second issue makes this problem a bit harder. What if it's the sum of three numbers? Four numbers? N numbers? This is where performance and dynamic programming come into play. 

Before we can introduce additional sums, we need to optimize the two sum first. 

### Performance

The time complexity of worst case is O(n^2). 

The space complexity is O(1), because it uses a constant amount of extra space, irrespective of the input size.

When thinking of ways to optimize this problem, I consider different data structures. I decided to use a hash map for this problem.

### New Approach: Hash Map
