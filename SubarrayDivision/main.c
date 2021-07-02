#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int birthday(int s_count, int *s, int d, int m)
{
    int count, result = 0;
    int current_sum;
    for (int i = 0; i < s_count; i++)
    {
        count = 1;
        current_sum = s[i];

        int j = i + 1;
        while (count < m)
        {
            current_sum += s[j];
            j++;
            count++;
        }
        if (current_sum == d)
            result++;
    }
    return result;
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 1, 3, 2};
    int result = birthday(n, arr, 3, 2);
    printf("%d", result);
    return 0;
}