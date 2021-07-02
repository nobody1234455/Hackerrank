#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n = 6;
    int count = 0;
    int max = 0;
    while (n > 0 || n == 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }
        else
        {
            if (count > max)
            {
                max = count;
            }
            count = 0;
        }
        if (n == 0)
            break;
        n /= 2;
    }
    printf("%d", max);
    return 0;
}