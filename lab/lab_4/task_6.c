#include <stdio.h>

// 6. Өгөгдсөн 𝑛 тоог гараас оруулан уг тооны бүх хуваагчдыг ол.

void main(){
    int i, n;
    printf("enter= \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        if(n % i == 0){
            printf("huwaagch %d\n", i);
        }
    }
}