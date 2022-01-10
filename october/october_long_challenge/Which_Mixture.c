#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);
        if (a > 0 && b > 0)
        {
            printf("Solution\n");
        }
        else if (a == 0)
        {
            printf("Liquid\n");
        }
        else if (b == 0)
        {
            printf("Solid\n");
        }
    }
}