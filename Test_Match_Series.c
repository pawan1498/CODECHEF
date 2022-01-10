#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[5], draw = 0, india = 0, eng = 0;
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", &arr[i]);
        }
        

        for (int i = 0; i < 5; i++)
        {
            if (arr[i] == 0)
            {
                draw++;
            }

            if (arr[i] == 1)
            {
                india++;
            }
            else if (arr[i] == 2)
            {
                eng++;
            }
        }

        if (india == eng)
        {
            printf("DRAW\n");
        }
        else if (india > eng)
        {
            printf("INDIA\n");
        }
        else if (eng > india)
        {
            printf("ENGLAND\n");
        }
    }
}