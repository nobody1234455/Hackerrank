#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define max 100

int getTotalX(int a_count, int *a, int b_count, int *b)
{
    int arr[max];
    int count = 0;
    int temp = b[0];
    int int_;
    int flag;
    for (int i = temp; i >= a[0]; i--)
    {
        int_ = i;
        flag = 1;
        for (int j = 0; j < a_count; j++)
            if (int_ % a[j] != 0)
            {
                flag = 0;
                break;
            }
        if (flag == 1)
        {
            count++;
            arr[count - 1] = int_;
        }
    }
    int result = 0;
    for (int j = 0; j < count; j++)
    {
        flag = 1;
        for (int i = 0; i < b_count; i++)
            if (b[i] % arr[j] != 0)
            {
                flag = 0;
                break;
            }
        if (flag == 1)
        {
            result++;
        }
    }
    return result;
}
int main()
{
    int result;
    int a[2] = {2, 4};
    int b[3] = {16, 32, 96};
    result = getTotalX(2, a, 3, b);
    printf("%d", result);
    return 0;
}