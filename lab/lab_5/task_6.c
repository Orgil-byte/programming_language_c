#include <stdio.h>

void main(){
    int i, n, j, s;
    printf("n = : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        for (s = 0; s < n - i; s++){
            printf(" ");
        }
        for(j = 0; j <=  2 * i; j++){
            printf("x");
        }
        printf("\n");
    }
}