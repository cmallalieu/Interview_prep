#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int a = 1;
    int and_max = 0;
    int or_max = 0;
    int xor_max = 0;

    for (int i = a; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if ((int)(i & j) < k && (int)(i & j) > and_max)
            {
                and_max = (int)(i & j);
            }
            if ((int)(i | j) < k && (int)(i | j) > or_max)
            {
                or_max = (int) (i | j);
            }
            if ((int)(i ^ j) < k && (int)(i ^ j) > xor_max)
            {
                xor_max = (int) (i ^ j);
            }
        }
    }
    printf("%d\n", and_max);
    printf("%d\n", or_max);
    printf("%d\n", xor_max);

  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

