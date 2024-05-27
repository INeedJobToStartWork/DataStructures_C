#ifndef myUtils /* Include guard */
#define myUtils

#include <stdio.h>

void printfArray(int *nums, int numsSize)
{
    printf("{%d,", nums[numsSize - 1]);
    for (int i = 1; i < numsSize - 1; i++)
    {
        printf(" %d,", nums[i]);
    }

    printf(" %d}", nums[numsSize - 1]);
}
#endif