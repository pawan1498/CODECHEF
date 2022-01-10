#include <stdio.h>
int main()
{
   long long int  t;
    scanf("%lld", &t);
    while (t--)
    {
       long long int  x, k;

        scanf("%lld", &x);
        scanf("%lld", &k);

        k = k*x;
       long long int  min = 2*x;
       long long int  max = k*(k-1);
        printf("%lld ",min);
        printf("%lld\n",max);
       
    }
}