# Documentation

## Introduction

Similarly to my solution in 1.TwoSum, this solution also uses a hash map. More specifically, it uses an algorithm called the Sliding Window. 

But first, I'm going to practice my understanding of hash maps by explaining them in the next section. Feel free to skip this section if you already know how they work. 

## Hash Maps

A hash map is a data structure that uses keys to store values. For example, in the context of a list of employees, when registering an employee, you would associate their name with an employee ID. This allows for efficient retrieval of an individual's information in constant time, on average. However, it's important to note that the efficiency of a hash map depends on factors such as the quality of the hash function and the size of the underlying array.

Hash maps provide a way to avoid the need for sequential searching through an array multiple times, but it's crucial to understand that the order of elements in a hash map is not guaranteed. While average-case complexity for operations like insertion, deletion, and lookup is constant, in the worst case, these operations could take O(n) time if there are many collisions.

## Sliding Window Algorithm 

The sliding window algorithm is a technique used for efficiently processing arrays or lists in a way that avoids redundant computation. It is particularly useful for solving problems involving subarrays or substrings. The basic idea behind the sliding window algorithm is to maintain a "window" of elements in the array and move this window through the array, updating it at each step.

We need a 'left' and a 'right' pointer to create the window. Both start at the beginning of the array. The right pointer then moves to the next index, and continues based off the conditions of the problem. In this case, The right pointer would move until it found a repeated character in the array. Once this is done, the left pointer moves one over, and the process repeats until we're at the end of the array.

## Solution

For my solution, I started by initializing the map and the map length. Then, I created a for loop that would iterate through each element in the array. These iterations represent the 'right' pointer.

Then, I created an if-else statement that determines if the current character already in the map. If so, the right pointer moves right and the max length is updated. If not, the left pointer is shifted one over. 

At the end of the for loop, we return our answer: the max length value. 
