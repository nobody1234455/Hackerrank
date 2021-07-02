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

char *angryProfessor(int k, int a_count, int *a)
{
    char *result;
    result = (char *)malloc(sizeof(char) * 3);
    int count = 0;
    for (int i = 0; i < a_count; i++)
        if (a[i] <= 0)
            count++;
    if (count <= k)
        strcpy(result, "YES");
    else
    {
        strcpy(result, "NO");
    }
    return result;
}

int main()
{
    int *a;
    a = (int *)malloc(sizeof(int) * 4);
    a[0] = -1;
    a[1] = -3;
    a[2] = 4;
    a[3] = 5;
    printf("%s", angryProfessor(3, 4, a));
    return 0;
}