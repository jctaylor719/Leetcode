# Documentation

## Introduction

When first considering this problem, I tried to find the pattern between the indexes of each row. When ```numRows = 3```, I noticed that the indexes for row 0 were incrementing by three. Then, I noticed the indexes in row 1 were incrementing by two. Then the indexes in row 2 were incrementing by 3 again. 

With this pattern forming, I checked to see if this was true for strings with ```numRows = 4```. I quickly realized this would not be the case, because row 1 incremented by four, then by two. I had to think of a different way to find a pattern. 

Then, I considered the pattern of the zigzag itself. The indexes go from row 0, to row 1, to row 2, to row n, then back to row 2, to row 1, to row 0. There is an oscillating pattern with the indexes. This brings us to our solution:

## Solution

If we iterate through the original string ```s```, we can assign the character at the index of ```s``` to a list with it's corresponding index. 

In order to do this, we first need to consider the base case. If ```numRows <= 1```, then the zigzag list is just the string itself. 

Next, we need to initialize the variables we need. We first need a ```vector<string>``` called ```list()```. The parameters of ```list()``` are ```list(numRows, "")```, which means we've initialized empty strings equivalent to the number of rows. We will also need an ```index``` variable of type ```int``` and a ```step``` variable of type ```int```. ```index``` refers to the position in the array, and ```step``` will help us oscillate. 

Now we need to create a ```for``` loop that iterates through every character in the string. Inside this ```for``` loop, we need to check if the current ```index``` is equal to ```0``` or ```numRows-1``` This is because the ```step``` needs to change to ```1``` or ```-1``` to create the oscillating effect. 

Next, we append the current character to the input string at the corresponding row. Then the index is assigned itself plus the ```step``` value. 

Outside the ```for``` loop, all that is left to do is apend the lists together. We need to initialize a ```string result``` and assign it the values of the lists combined. 


