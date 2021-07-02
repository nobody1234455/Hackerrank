#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *dayOfProgrammer(int year)
{
    //1 3 5 7 8 10 12
    //2 4 6 9 11
    // int leapYear = 31 + 29 + 31 + 30 + 31 +30 +31*2 + 12;
    // int not_leapYear = leapYear - 1;
    char text[4];
    char *result;
    result = (char *)malloc(sizeof(char) * 10);
    sprintf(text, "%d", year);

    int flag = 0;
    strcpy(result, "26.09.1918");
    if (year == 1918)
        return result;
    if (year % 4 == 0)
        if (year % 100 == 0 && year != 1800 && year != 1900 && year != 1700)
        {
            if (year % 400 == 0)
                flag = 1;
        }
        else
            flag = 1;

    if (flag == 1)
    {
        strcpy(result, "12.09.");
        strcat(result, text);
    }
    else
    {
        strcpy(result, "13.09.");
        strcat(result, text);
    }
    return result;
}

int main()
{
    int year = 1800;
    char *result = dayOfProgrammer(year);

    printf("%s", result);
    return 0;
}