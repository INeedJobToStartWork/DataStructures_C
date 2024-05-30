// #include <math
#include "../../libs/utils.h"

void bubbleSort(int *nums, int numsSize)
{

    int temp;
    int swapped = 0;
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = 0; j < numsSize - i - 1; j++)
        {
            swapped = 0;
            if (nums[j] > nums[j + 1])
            {
                temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
        {
            break;
        }
    }
}

int main(void)
{

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int numS = sizeof(array) / sizeof(int);

    bubbleSort(array, numS);
    printfArray(array, numS);

    return 0;
}