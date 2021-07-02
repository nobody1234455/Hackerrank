#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    /**
	* Sort an array a of the length n
	*/
    for (int i = 0; i < n; i++)
    {
        float p1 = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        int j = i + 1;
        while (j < n)
        {
            float p2 = (tr[j].a + tr[j].b + tr[j].c) / 2.0;
            float s1 = sqrt(p1 * (p1 - tr[i].a) * (p1 - tr[i].b) * (p1 - tr[i].c));
            float s2 = sqrt(p2 * (p2 - tr[j].a) * (p2 - tr[j].b) * (p2 - tr[j].c));
            if (s1 > s2)
            {
                struct triangle new_triangle;
                new_triangle.a = tr[i].a;
                new_triangle.b = tr[i].b;
                new_triangle.c = tr[i].c;

                tr[i].a = tr[j].a;
                tr[i].b = tr[j].b;
                tr[i].c = tr[j].c;

                tr[j].a = new_triangle.a;
                tr[j].b = new_triangle.b;
                tr[j].c = new_triangle.c;
            }
            j++;
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}