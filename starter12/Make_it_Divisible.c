#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int start ; 
        int end = 10 ; 
        for (int i = 1; i < n; i++)
        {
            end = end*10 ; 
        }
        start = end /10; 
        for (int i = start ; i < end; i++){
            if(i % 3 ==0 && i%9 != 0 && i%2 != 0  ){
                printf("%d\n",i);
                break;
            }
        
        }
        
    }
}