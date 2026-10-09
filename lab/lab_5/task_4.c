#include <stdio.h>

void main(){
    int n, i, k;
    printf("n = : ");
    scanf("%d", &n);
   
    for(i = 1; i <= n; i++){
        for(k = 1; k <= n; k++){

            if(i % 2 == 0){
                if(k % 2 == 0){
                    printf("o");
            }   else{
                    printf("x");
            }
            }else{
                if(k % 2 == 0){
                    printf("x");
            }   else{
                     printf("o");
            } 
            }

            
        }
        printf("\n");
    }
}