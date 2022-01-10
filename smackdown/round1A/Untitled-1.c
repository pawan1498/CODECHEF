#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y;

        scanf("%d", &x);
        scanf("%d", &y);
        int dist = x - y;
        if (dist < 0)
             dist = dist*-1;

            printf("%d\n", dist);
    }
}