#include <stdio.h>
#include "../../libs/utils.h"

int min(int n1, int n2)
{
    return n1 > n2 ? n2 : n1;
}

int jumpSearch(const int *nums, const int numsSize, const int target)
{
    int step = sqrt(numsSize);
    int prev = 0;
    while (nums[min(step, numsSize) - 1] < target)
    {
        prev = step;
        step += sqrt(numsSize);
    }

    for (int i = prev; i != step; i++)
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
    printf("%d", jumpSearch(arrs, arrSize, 140));

    return 0;
}