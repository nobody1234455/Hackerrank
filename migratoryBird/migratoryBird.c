#include <stdio.h>
#include <stdlib.h>

int migratoryBirds(int arr_count, int *arr)
{
    int my_arr[5] = {0, 0, 0, 0, 0};
    for (int i = 0; i < arr_count; i++)
    {
        my_arr[arr[i] - 1] += 1;
    }
    int max = my_arr[0];
    int pos = 1;
    if (max < my_arr[1])
    {
        max = my_arr[1];
        pos = 2;
    }
    if (max < my_arr[2])
    {
        max = my_arr[2];
        pos = 3;
    }
    if (max < my_arr[3])
    {
        max = my_arr[3];
        pos = 4;
    }
    if (max < my_arr[4])
    {
        max = my_arr[4];
        pos = 5;
    }
    return pos;
}

int main()
{
    int *arr;
    arr = (int *)malloc(sizeof(int) * 6);
    arr[0] = 1;
    arr[1] = 4;
    arr[2] = 4;
    arr[3] = 4;
    arr[4] = 2;
    arr[5] = 3;
    int pos = migratoryBirds(6, arr);
    printf("%i", pos);
    return 0;
}
