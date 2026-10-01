#include <stdio.h>

// 4. Өгөгдсөн 𝑛 тоог гараас оруулан төгс тоо мөн эсэхийг шалга.
void main(){
    int n, i, sum;
    printf("enter=\n");
    scanf("%d", &n);

    for(i = 1; i <= n / 2; i++){
        
        if(n % i == 0){
            sum += i;
        }
    }

    if(sum == n){
        printf("tugs too mun\n");
    }else{
        printf("tugs too bish\n");
    }

}