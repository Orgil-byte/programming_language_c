#include <stdio.h>

void main(){
    int n, i;
    printf("n = : ");
    scanf("%d", &n);
   
    for(i = 1; i <= n/2; i++){
        printf("xoxo\noxox");
        

        if(n % 2 != 0){
            printf("\nxoxo");
        }

        printf("\n");
    }
}