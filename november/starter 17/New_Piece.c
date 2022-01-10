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
        int start = a + b;
        int end = c + d;
        if (a == c  && b == d)
        {
            printf("0\n");
            return 0 ; 
        }
        
         if (start % 2 == 0)
        {

            if (end % 2 == 0)
            {
                printf("2\n");
            }
            else
            {
                printf("1\n");
            }
        }
        else
        {

            if (end % 2 == 0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
    }
}