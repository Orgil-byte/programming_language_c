#include <stdio.h>

// 5. Өгөгдсөн 𝑛 тооны цифрүүдийн нийлбэрийг ол.

void main(){
    int n, sum;
    printf("enter=\n");
    scanf("%d", &n);

    if(n < 0) n = -n;
    
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }

    printf("Niilber =%d\n", sum);
}