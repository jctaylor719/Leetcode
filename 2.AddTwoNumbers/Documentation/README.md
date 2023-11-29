# Documentation

## My Solution

### Introduction

In order to solve this problem, I quickly reviewed my memory of linked lists. I really liked [Nikhil Lohia's](https://www.youtube.com/watch?v=KMS0WFxrsT8) explanation in particular.

I really like the quote "If you can't explain it simply, you don't understand it well enough." In order to master data structures, I'm going to describe them in detail whenever I have a project centered around it. 

If you already know how linked lists work, I recommend skipping the next section. 

### Linked Lists

A linked list can be described as a set of nodes that point from left to right. The beginning of a linked list is referred to as the **head**, and the end is referred to as the **tail**.

Each node has a value and a pointer to the next node. The end of a linked list has a pointer value of NULL, which is crucial because it signifies the end of the list. 

There are also different types of linked lists. This project uses a singly linked list, but a doubly linked list and a circular linked list also exist. 

+ **Singly Linked List:**
  + has nodes with pointers to the next node.
+ **Doubly Linked List:**
  + has nodes with pointers to the next AND the previous node.
+ **Circularly Linked List**
  + forms a loop, with the last node pointing back to the first node.  

Some important advantages of linked lists are: dynamic resizing and efficient insertion/deletion operations.

### Problem and Solution

The solution for this problem requires a third linked list as an answer. So, a new ListNode is created at the beginning. 

We iterate through each linked list, and add the values 

### Improvements

