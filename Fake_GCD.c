#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
       
        for (int i = 1; i <= n; i++)
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}