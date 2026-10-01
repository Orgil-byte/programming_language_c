#include <stdio.h>

// 7. 𝑎, 𝑏 тоонуудын хамгийн их ерөнхий хуваагчийг ол.

void main(){
    int a, b, i, max, ih_huwaagch;
    printf("enter a, b= ");
    scanf("%d %d", &a, &b);
    max = (a > b) ? a : b;

     for (i = 1; i <= max; i++){
        if(a % i == 0 && b % i == 0){
            ih_huwaagch = i;
        }
    }

    printf("Hamgiin ih huwaagch %d\n", ih_huwaagch);
}