# Documentation

## Introduction

This problem is interesting because it requires us to stay within 32 bits; we cannot store 64 bit integers. Given this environment, how can we check if the input is within the 32-bit range? 

## INT_MAX and INT_MIN

```INT_MAX``` is 2147483647 (2^31), and ```INT_MIN``` is -2147483648 (2^31 - 1). One way we could check if the reverse integer ```r``` is within the given range is to see if ```r > INT_MAX / 10``` or ```r < INT_MIN / 10```.

However, this alone does not account for ```2147483641-7``` or ```-2147483641-8```, which are all valid integers. We will need an additional ```if``` statement to see if the last digit is greater than or equal to ```INT_MAX % 10``` or less than or equal to ```INT_MIN % 10```. 

## Solution

