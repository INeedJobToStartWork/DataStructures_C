#include <stdio.h>
#include <stdlib.h>
#include "../../libs/utils.h"

int linearSentinelSearch(int *nums, const int numsSize, const int target)
{
    int last = nums[numsSize - 1];
    nums[numsSize - 1] = target;

    int i = 0;
    while (nums[i] != target)
        i++;

    nums[numsSize - 1] = last;
    if (i < numsSize - 1 || nums[i] == target)
    {
        return i;
    }

    return -1;
}

int main(void)
{
    int arrs[] = {10, 22, 33, 47, 59, 69, 70, 88, 96, 140};

    int arrSize = sizeof(arrs) / sizeof(arrs[0]);
    printf("%d", linearSentinelSearch(arrs, arrSize, 140));

    return 0;
}