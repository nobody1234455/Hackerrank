#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *kangaroo(int x1, int v1, int x2, int v2)
{
    int flag = 1;
    char *yes, *no;
    yes = (char *)malloc(sizeof(char) * 10);
    no = (char *)malloc(sizeof(char) * 10);
    strcpy(yes, "YES");
    strcpy(no, "NO");
    int count = 1;
    while (flag == 1)
    {
        if (x1 == x2)
            return yes;
        else if (x2 < x1)
        {
            return no;
        }
        x1 += v1;
        x2 += v2;
    }
}

int main()
{

    printf("%s", kangaroo(0, 3, 4, 2));
    return 0;
}