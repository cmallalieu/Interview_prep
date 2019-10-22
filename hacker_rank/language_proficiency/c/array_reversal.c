#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    int* newArr[num];
    int j = 0;

    for(i = num - 1; i >= 0; i--)
    {
        newArr[j] = arr[i];
        j++;
    }

    /* Write the logic to reverse the array. */

    for(i = 0; i < num; i++)
        printf("%d ", *(newArr + i));
    return 0;
}

