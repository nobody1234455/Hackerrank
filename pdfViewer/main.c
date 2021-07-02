#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int designerPdfViewer(int h_count, int *h, char *word)
{
    int max_length = h[(int)word[0] - 97];
    printf("%s\n", word);
    for (int i = 0; i < strlen(word) - 1; i++)
    {
        if (h[(int)word[i] - 97] > max_length)
        {
            max_length = h[(int)word[i] - 97];
        }
    }
    return max_length * strlen(word);
}

int main()
{
    int arr[26] = {1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7};
    char string[4] = "zaba";
    printf("%d", designerPdfViewer(26, arr, string));
    return 0;
}