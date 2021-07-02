#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.

    for (int i = 1; i <= n*2 - 1; i++){
        for (int j = 1; j <= n*2 - 1; j++){
            if (i == 1 || i == n*2-1)
                printf("%d", n);
            else if (j == 1 || j == n*2-1)
                printf("%d", n);
            else if ()
                printf("%d", n - i);
        }   
    }
    
    return 0;
}