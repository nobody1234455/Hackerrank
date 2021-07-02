#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *timeConversion(char *s)
{
    int n = strlen(s);
    char *result;
    result = (char *)malloc(sizeof(char) * 20);
    char *hour, *sign;
    hour = (char *)malloc(sizeof(char) * 2);
    sign = (char *)malloc(sizeof(char) * 1);
    for (int i = 0; i < 2; i++)
        strcpy(&hour[i], &s[i]);
    strcpy(sign, &s[8]);
    //pos = 7
    int int_hour = atoi(hour);
    if (strcmp(sign, "PM") == 0)
    {
        if (int_hour < 12)
        {
            int_hour += 12;
        }
        else if (int_hour == 12)
            int_hour = 12;
    }
    else if (int_hour == 12)
    {
        int_hour = 0;
    }
    //We convert hour back to military time
    strcpy(hour, "");
    strcpy(sign, "");
    sprintf(hour, "%i", int_hour);
    if (int_hour < 10)
    {
        strcpy(&result[0], "0");
        strcpy(&result[1], hour);
        strcpy(&result[2], ":");
    }
    else
    {
        strcpy(&result[0], &hour[0]);
        strcpy(&result[1], &hour[1]);
        strcpy(&result[2], ":");
    }
    for (int i = 3; i < strlen(s) - 2; i++)
        strcpy(&result[i], &s[i]);
    strcpy(&result[8], "");
    printf("%s", result);
    return result;
}

int main()
{
    char *my_string;
    my_string = (char *)malloc(sizeof(char) * 10);
    strcpy(my_string, "07:00:45PM");
    timeConversion(my_string);
    printf("%s", my_string);
    return 0;
}