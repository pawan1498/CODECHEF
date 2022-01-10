#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, temp;
        int less = 0, more = 0, bost = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n; ++i)
        {

            for (int j = 0; j < n; ++j)
            {
                // temp = arr[i];
                if (arr[j] <= arr[i])
                    more++;
                else
                    less++;
            }
            more--;

            if (more >= less)
            {
                bost++;
            }
            less = 0;
            more = 0;
        }
        printf("%d\n", bost);
    }
}