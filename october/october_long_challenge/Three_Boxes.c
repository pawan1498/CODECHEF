#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, c, d;
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        int sum = a + b + c;
        if (sum % d == 0)
        {
            printf("%d\n", (sum / d));
        }
        else
        {
            printf("%d\n", ((sum / d) + 1));
        }
    }
}