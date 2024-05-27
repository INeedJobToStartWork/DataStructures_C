#include <stdio.h>
#include <stdlib.h>
#include "../../libs/utils.h"
// #include "../../utils/printfArray.h"

int ternarySearch(const int *nums, const int numsSize, const int target)
{
    int *arr = (int *)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++)
    {
        arr[i] = nums[i];
    }

    free(arr);
    return -1;
}
int main(void)
{
    int arrs[] = {1, 2, 4};
    int arrSize = sizeof(arrs) / sizeof(arrs[0]);
    // ternarySearch(arrs, arrSize, 2);

    int testArr[] = {4, 2, 3, 1, 6};
    printf("%d", 4 [testArr]);

    return 0;
}