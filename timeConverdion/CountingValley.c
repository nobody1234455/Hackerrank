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

int countingValleys(int steps, char *path)
{
    int count = 0;
    int i = 0;
    int level = 0;

    while (i < steps)
    {
        if (path[i] == 'D' && level <= 0)
        {
            int j = i + 1;
            level--;
            count++;
            while (j < steps && level < 0)
            {
                if (path[j] == 'U')
                {
                    level++;
                    j++;
                }
                else
                {
                    level--;
                    j++;
                }
            }
            i = j;
        }
        else if (path[i] == 'U')
        {
            level++;
            i++;
        }
        else
        {
            level--;
            i++;
        }
    }
    return count;
}
int main()
{
    //UDDDUDUU
    char s[20] = "UDDDUDUUUUDDDDUUDUDU";
    printf("%d", countingValleys(20, s));
    return 0;
}