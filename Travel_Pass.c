#include<stdio.h>
#include<string.h>
int main()
{
    int t ; 
    scanf("%d",&t);
    while (t--)
    {
        int n,a,b;
        char s[50];
        scanf("%d",&n);
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%s",s);
        int count =0; 

        for(int i =0 ; i<n ; i++){
            if(s[i] == '0'){
                count = count + a;
            }
            else{
                count = count + b;
            }

        }
        printf("%d\n",count);
    }
    
}