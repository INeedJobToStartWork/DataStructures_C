#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "../../libs/utils.h"

int ternarySearch(const int *nums, const int numsSize, const int target)
{
    int left = 0, right = numsSize - 1;

    while (left < right)
    {
        int m1 = left + (right - left) / 3;
        int m2 = right - (right - left) / 3;

        if (nums[m1] == target)
        {
            return m1;
        }
        else if (nums[m2] == target)
        {
            return m2;
        }
        else if (nums[m1] > target)
        {
            right = m1 - 1;
        }
        else if (nums[m2] < target)
        {
            left = m2 + 1;
        }
        else
        {
            left = m1 + 1;
            right = m2 - 1;
        }
    }

    return -1;
}
int main(void)
{
    int arrs[] = {10, 22, 33, 47, 59, 69, 70, 88, 96, 140};

    int arrSize = sizeof(arrs) / sizeof(arrs[0]);
    printf("%d", ternarySearch(arrs, arrSize, 59));

    // int testArr[] = {4, 2, 3, 1, 6};
    // printf("%d", 4 [testArr]);

    return 0;
}