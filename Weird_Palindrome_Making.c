#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        long long int a[n];
        for (long long int i = 0; i < n; i++)
            scanf("%lld", &a[i]);

        long long int count=0;
        for (long long int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                count++;

    
        }
        printf("%lld\n",(count/2));
    }
}