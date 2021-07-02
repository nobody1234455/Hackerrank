#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    *returnSize = 2;
    int previousValue[1000] = {[0...1000] = -1};
    for (int i = 0; i < numsSize; i++)
    {
        int currentValue = nums[i];
        int neededValue = target - nums[i];
        int index = previousValue[neededValue];
        if (index != -1)
        {
            int *arr;
            arr = (int *)malloc(sizeof(int) * 2);
            arr[0] = index;
            arr[1] = i;
            return arr;
        }
        else
            previousValue[currentValue] = i;
    }
    return 0;
}

int main()
{
    int *arr;
    int returnSize;
    int a[] = {2, 7, 11, 15};
    int size = 4;
    int target = 9;
    arr = twoSum(a, size, target, &returnSize);
    for (int i = 0; i < returnSize; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}