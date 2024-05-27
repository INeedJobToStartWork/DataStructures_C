#include <stdio.h>
#include <math.h>

short search(int *nums, int numsSize, int target)
{
    unsigned short low = 0;
    int high = numsSize - 1;

    do
    {
        unsigned short mid = floor(low + (high - low) / 2);
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
    } while (low <= high);

    return -1;
}

int main(void)
{
    int exampleArray2[] = {5};
    int exampleArray3[] = {2, 5, 6, 7, 8};

    printf("Result Index: %d\n", search(exampleArray2, 1, 5));
    printf("Result Index: %d\n", search(exampleArray3, 2, 5));

    return 0;
}