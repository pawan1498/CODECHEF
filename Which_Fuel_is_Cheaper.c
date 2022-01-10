#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, a, b, k;
        scanf("%d", &x);
        scanf("%d", &y);
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &k);

        int xn, yn;
        xn = x + (k - 1) * a;
        yn = y + (k - 1) * b;

        if (xn > yn)
            printf("DIESEL\n");
        else if (yn > xn)
            printf("PETROL\n");
        else if (xn == yn)
            printf("SAME PRICE\n");
    }
}