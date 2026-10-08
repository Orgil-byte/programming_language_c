#include <stdio.h>

void main(){
    int i, n, j, count, sum;
    printf("n = : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        count = 0;

       if(i == 1){
        continue;
       }

       for(j = 1; j <= i; j++){
        if(i % j == 0){
            count++;
        }
    }

    if(count == 2){
    printf("%d\n", i);
    }
    }
}