#include <stdio.h>
#include "../../libs/utils.h"

int linearSearch(const int *nums, const int numsSize, const int target)
{
    for (int i = 0; i != numsSize; i++)
    {
        if (nums[i] == target)
            return i;
    }
    return -1;
}

int main(void)
{
    int arrs[] = {10, 22, 33, 47, 59, 69, 70, 88, 96, 140};

    int arrSize = sizeof(arrs) / sizeof(arrs[0]);
    printf("%d", linearSearch(arrs, arrSize, 10));

    return 0;
}