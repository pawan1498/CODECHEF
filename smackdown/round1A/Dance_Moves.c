#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, moves = 0;

        scanf("%d", &x);
        scanf("%d", &y);
        int dist = x - y;
        if (dist < 0)
            dist = dist * -1;

        if (dist % 2 == 0)
            moves = dist / 2;
        else
            moves = dist / 2 + 1 + dist % 2;

        printf("%d\n", moves);
    }
}