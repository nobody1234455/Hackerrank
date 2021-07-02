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

int utopianTree(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    if (n % 2 == 0)
        return utopianTree(n - 1) + 1;
    else
    {
        return utopianTree(n - 1) * 2;
    }
}

int main()
{
    printf("%d", utopianTree(4));
    return 0;
}