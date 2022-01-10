#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        int x;
        scanf("%d", &n);
        scanf("%d", &x);
        int a[n];
        int xo[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            xo[i] = x ^ a[i];
        }
        
        int count, maxCount = 0;
        int maxElement;
        for (int i = 0; i < n; i++) //For loop to hold each element
        {
            count = 1;
            for (int j = i + 1; j < n; j++) //For loop to check for duplicate elements
            {
                if (a[j] == a[i])
                {
                    count++; //Increment  count
                    /* If count of current element is more than 
                maxCount, then update maxElement */
                    if (count > maxCount)
                    {
                        maxCount = count;
                        maxElement = a[j];
                    }
                }
            }
        }

        int count1 = 0;
        if (maxCount != 0)
        {
            int xoMe = x ^ maxElement;
            // printf("x-%d\n", xoMe);
            for (int i = 0; i < n; i++)
            {
                if (a[i] == xoMe)
                {
                    count1++;
                }
            }
            printf("%d %d",(maxCount+count1) ,count1 );
        }
        else
        {
            int time = 0;
            // int maxtime;
            // printf("llg");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[i] == xo[j])
                    {
                        time = 1;
                    }
                    
                }
            }
            if(time == 1 )
            {
                printf("2 1\n");
            }
            else{
                printf("1 0\n");
            }
        }
    }
}