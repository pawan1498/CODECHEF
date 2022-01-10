#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[3], count = 0;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == 7)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}