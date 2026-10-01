#include <stdio.h>

// 3. 1-ээс 𝑛 хүртлэх тэгш тоонуудын нийлбэрийг ол.

void main(){
    int n ,i, sum, print;
    printf("enter=\n");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        if(i % 2 == 0){
            sum += i;
            printf("%d\n", sum);
        }
        
    }
}