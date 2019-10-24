#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the minimumSwaps function below.
def minimumSwaps(arr):

    num_swaps = 0

    # if the list is empty or a single element not swaps are required
    if len(arr) < 2:
        return 0

    # for each element in the arr
    for i, val in enumerate(arr[:len(arr) - 1]):
        # while the current element is not in the correct place, keep swapping
        while i + 1 != arr[i]:
            tmp = arr[i]
            arr[i] = arr[val - 1]
            arr[val - 1] = tmp
            num_swaps += 1
            val = arr[i]    
    return num_swaps        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = minimumSwaps(arr)

    fptr.write(str(res) + '\n')

    fptr.close()

