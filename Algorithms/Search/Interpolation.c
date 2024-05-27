#include <stdio.h>

int interpolationSearch(const int *nums, const int numsSize, const int target)
{
    int low = 0;
    int high = numsSize - 1;

    while (target >= nums[low] & target <= nums[high])
    {
        int probe = low + (high - low) * (target - nums[low]) / (nums[high] - nums[low]);
        if (nums[probe] == target)
        {
            return probe;
        }
        if (nums[probe] < target)
        {
            low = probe + 1;
        }
        else if (nums[probe] > target)
        {
            high = probe - 1;
        }
    }

    return -1;
}

int main(void)
{
    int arrs[] = {10, 22, 33, 47, 59, 69, 70, 88, 96, 140};

    int arrSize = sizeof(arrs) / sizeof(arrs[0]);
    printf("%d", interpolationSearch(arrs, arrSize, 69));

    return 0;
}