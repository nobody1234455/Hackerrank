#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int diagonalDifference(int arr_rows, int arr_columns, int **arr)
{
    int abs_value = 0;
    for (int i = 0; i < arr_rows; i++)
    {
        abs_value += arr[i][i] + arr[i][arr_rows - i - 1];
    }
    if (arr_rows % 2 != 0)
        return abs(abs_value - arr[arr_rows % 2][arr_rows % 2]);
    else
    {
        return abs(abs_value);
    }
}

int main()
{
    int **arr;
    int n;
    scanf("Enter n: %d", &n);
    arr = (int **)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i)
        for (int j = 0; j < n; j++)
        {
            /* code */
            scanf("%d", &arr[i][j]);
        }

    diagonalDifference(3, 3, arr);
    free(arr);
    return 0;
}