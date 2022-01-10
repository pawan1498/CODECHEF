#include<stdio.h>
int main(){
    int t ; 
    scanf("%d",&t);
    while (t--)
    {
        int arr[7],sunny = 0,rainy = 0 ;
        for(int i = 0 ; i<7 ; i++){
            scanf("%d",&arr[i]);
        }
        for(int i = 0 ; i<7 ; i++){
            if(arr[i] == 0 ){
                rainy++;
            }
            else{
                sunny++;
            }

        }

        if(sunny > rainy){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
    
}