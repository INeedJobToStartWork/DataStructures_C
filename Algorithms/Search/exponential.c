#include <stdio.h>

int min(int n1, int n2)
{
    return n1 > n2 ? n2 : n1;
}

int exponentialSearch(const int *nums, const int numsSize, const int target)
{
    int low = 0;
    int high = numsSize;

    for (int i = 1; i < numsSize; i *= 2)
    {
        if (nums[min(i, numsSize)] == target)
            return i;
        if (nums[min(i, numsSize)] < target)
            low = i + 1;
        else
            high = i - 1;
    }

    for (int i = 0; i < high; i++)
    {
        int mid = (high / 2) + 2;
        if (nums[mid] == target)
            return mid;
        if (nums[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // printf("low: %d, high: %d\n", low, high);

    return -1;
}

int main(void)
{
    int arrs[] = {10, 22, 33, 47, 59, 69, 70, 88, 96, 140};

    int arrSize = sizeof(arrs) / sizeof(arrs[0]);
    printf("%d", exponentialSearch(arrs, arrSize, 69));

    return 0;
}