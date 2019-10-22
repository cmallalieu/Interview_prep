#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int arrSize;
    scanf("%d",&arrSize);
    
    int* arr = (int*) malloc(arrSize * sizeof(int));

    for(int i = 0; i < arrSize; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        arr[i] = tmp;
    }

    int sum = 0;

    for(int j = 0; j < arrSize; j++)
    {
        sum += arr[j];
    }

    printf("%d", sum);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
