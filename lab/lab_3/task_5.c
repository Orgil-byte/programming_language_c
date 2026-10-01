#include <stdio.h>

// 5. N<=100,000 тоо өгөгдсөн бол хэрэв тухайн тоо сондгой бол 3-д хуваагдах тооны
// шинжээр 3-т хуваагдах эсэхийг тогтоо. Хэрэв тэгш тоо байвал 4-т хуваагдах тооны
// шинжээр 4-т хуваагдах эсэхийг нь тогтоо.
 
void main(){
    int n, t, d1, d2, d3, d4, d5, last2, sum;
    printf("5. Enter N=\n");
    scanf("%d", &n);

    if(n >= 100000){
        printf("The number should be below 100000")
    }
    
    if(n % 2 == 1){
        t = n;
        d1 = t % 10;    
        t = t / 10;     
        d2 = t % 10;
        t = t / 10;
        d3 = t % 10;
        t = t / 10;
        d4 = t % 10;
        t = t / 10;
        d5 = t % 10;
        sum = d1 + d2 + d3 + d4 + d5;
 
        if(sum % 3 == 0){
            printf("5. %d is divisible by 3\n", n);
        }else{
            printf("5. %d is NOT divisible by 3\n", n);
        }
    }else{
        
        last2 = n % 100;

        if(last2 % 4 == 0){
            printf("5. %d is divisible by 4\n", n);
        }else{
            printf("5. %d is NOT divisible by 4\n", n);
        }
    }
}
