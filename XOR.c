#include<stdio.h>
int main(){
    int b=2;
    for (int  i = 0; i < 100; i++)
    {
       printf("%d\t",(i^b));
    }
    
}