#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &arr[i]);
        }
        int count=0 ; 
        for (int  i = 0; i < 3; i++)
        {
            if(arr[i]  == arr[i+1]){
                count++;
            }
        }
        // printf("%d\n",count);
        if(count == 3 ){
            printf("0\n");
        }
        else if(count == 0){
            printf("2\n");
        }
        else{
            printf("1\n");
        }
    }
}