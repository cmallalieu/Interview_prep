#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the freqQuery function below.
def freqQuery(queries):

    if len(queries) == 0:
        return []
    # int,freq key,val map
    freq_dict = {}
    freq_res = []

    for query in queries:
        # if current query is an insert
        if query[0] == 1:
            # if the key is already in the map inc freq
            if freq_dict.get(query[1]):
                freq_dict[query[1]] += 1
            else:
                freq_dict[query[1]] = 1

        # if query is remove
        elif query[0] == 2:
            # if the key already exists
            if freq_dict.get(query[1]):
                # if val for key is one than remove it
                if freq_dict.get(query[1]) == 1:
                    freq_dict.pop(query[1])
                else:
                    freq_dict[query[1]] -= 1
        
        # if query is a freq check
        elif query[0] == 3:
            found_flag = 0
            for freq in freq_dict.values():
                if freq == query[1]:
                    freq_res.append(1)
                    found_flag = 1
                    break            
            if not found_flag:
                freq_res.append(0)
    return freq_res


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    queries = []

    for _ in range(q):
        queries.append(list(map(int, input().rstrip().split())))

    ans = freqQuery(queries)

    fptr.write('\n'.join(map(str, ans)))
    fptr.write('\n')

    fptr.close()

