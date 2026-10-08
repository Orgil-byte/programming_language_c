#include <stdio.h>

void main(){
    int n, i, j, k, y;
    printf("n = : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        for(k = 1; k <= i; k++){
            printf("x");
        }
        printf("\n");
    }

    for(j = n - 1; j >= 1; j--){
        for(y = j - 1; y >= 0; y--){
            printf("x");
        }
            printf("\n");
    }
}