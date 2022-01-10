#include<stdio.h>
int main(){
    int t ; 
    scanf("%d",&t);
    while (t--)
    {
        int a,b,c,d,e;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        scanf("%d",&e);

        if((a+b)<=d && c<=e){
            printf("YES\n");

        }   
        else if((b+c)<=d && a<=e){
            printf("YES\n");


        }   
        else if((c+a)<=d && b<=e){
            printf("YES\n");


        }  
        else{
            printf("NO\n");


        }
    }
    
}