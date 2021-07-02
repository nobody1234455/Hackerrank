#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pickingNumbers(int a_count, int *a)
{
    int result = 0;
    int arr[101] = {0};
    for (int i = 0; i < a_count; i++)
    {
        arr[a[i]] += 1;
    }
    for (int i = 0; i < a_count; i++)
        if (arr[a[i]] != 0)
        {
            if (arr[a[i]] > 1 && arr[a[i]] > result)
                result = arr[a[i]];

            if (arr[a[i]] + arr[a[i] - 1] > result)
                result = arr[a[i]] + arr[a[i] - 1];

            if (arr[a[i]] + arr[a[i] + 1] > result)
                result = arr[a[i]] + arr[a[i] + 1];
        }
    return result;
}

int main()
{
    int arr[10] = {4, 6, 5, 3, 3, 1};

    printf("%d", pickingNumbers(6, arr));
    return 0;
}