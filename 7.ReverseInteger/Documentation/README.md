# Documentation

## Introduction

This problem is interesting because it requires us to stay within 32 bits; we cannot store 64 bit integers. Given this environment, how can we check if the input is within the 32-bit range? 

## INT_MAX and INT_MIN

```INT_MAX``` is 2147483647 (2^31), and ```INT_MIN``` is -2147483648 (2^31 - 1). One way we could check if the reverse integer ```r``` is within the given range is to see if ```r > INT_MAX / 10``` or ```r < INT_MIN / 10```.

## Solution

This problem has a relatively simple solution. After intializing the reverse integer ```r```, I created a ```while``` loop that continues until the input integer ```x``` reaches ```0```. 

Inside this loop, we first check if ```r``` is in bounds. If it is, we continue with the solution, and otherwise, we ```return 0```. 

Next, ```r = r * 10 + x % 10``` and ```x = x / 10```. But what is this doing? I believe it is easier to understand with a detailed example.

Suppose our input integer is ```123```. So, we are trying to create a reverse integer with the value ```321```. 

Our reverse integer starts at 0. So, ```r = 0 * 10 + 123 % 10```. This is simplified to ```r = 123 % 10``` which is ```r = 3```. Notice that this value is the beginning of our target value ```321```. 

Then, ```x = 123 / 10``` simplifies to ```x = 12```. Since ```x != 0```, the loop continues.

Remember that ```r = 3``` and ```x = 12```. So, ```r = 3 * 10 + 12 % 10``` which simplifies to ```r = 32```. Then, ```x = 12 / 10``` is ```x = 1```.

Notice how as ```r``` expands from left to right, while ```x``` is removing numbers from right to left. 

In our last iteration, ```r = 32 * 10 + 1 % 10 == 321``` and ```x = 1 % 10 == 0```, thus the loop comes to an end, and the final result ```r``` can be returned. 

As a quick and easy visualization:

> ```r: 0```
> ```x: 123```

> ```r: 3```
> ```x: 12```

> ```r: 32```
> ```x: 1```
  
> ```r: 321```
> ```x: 0```
