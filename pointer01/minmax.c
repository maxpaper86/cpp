#include <stdio.h>


int MaxAndMin(int arr[5], int **maxptr, int **minptr)
{
    int i =0;

    *minptr = &arr[0];
    *maxptr = &arr[0];

    for(i = 0; i<5; i++)
    {
        if(**minptr > arr[i]) *minptr = &arr[i];
        if(**maxptr < arr[i]) *maxptr = &arr[i];
    }

    return 0;
}

int main(void)
{
    int *maxptr = NULL;
    int *minptr = NULL;
    int arr[5] = {10, -3, 5, 18, 2};

    MaxAndMin(arr, &maxptr, &minptr);

    printf("min=[%d], max=[%d]\n", *minptr, *maxptr);

    return 0;
}
