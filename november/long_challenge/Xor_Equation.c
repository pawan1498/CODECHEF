#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long int n;
        scanf("%ld", &n);
        long int a[n];
        for (long int i = 0; i < n; i++)
            scanf("%ld", &a[i]);
        long int var = 0;
        for (long int i = 0; i < n; i++)
        {
            var = var ^ a[i];
        }
        if (var == 0)
            printf("0\n");

        long int x = 0;
        long int eq = 0;
        for (long int i = 0; i < 5; i++)
        {
            for (long int i = 0; i < n; i++)
            {
                eq = eq ^ (a[i] + x);
            }
            if (eq == 0)
                printf("%ld", x);
                return 0 ; 
            x++;
        }
    }
}