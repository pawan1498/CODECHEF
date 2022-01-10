#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int x, y;
        scanf("%lld", &x);
        scanf("%lld", &y);

        if (x == 0 && y == 0)
        {
            printf("NO\n");
        }
        else if (x < 0 || y < 0)
        {
            printf("NO\n");
        }
        else if (x % 2 == 0)
        {
            if (x == 0)
            {
                if (y % 2 == 0)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }
            else
            {
                printf("YES\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
}