#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pageCount(int n, int p)
{
    int start = 1;
    int end = n;
    int ibj = p;
    int countMin = 0;
    if (p == 1 || n == p)
        return 0;
    //Consider from left to right
    int left = p - 1;
    //Consider from right to left

    float result = roundf((float)left / 2);
    return (int)result;
}
int main()
{
    printf("%d", pageCount(6, 2));
    return 0;
}