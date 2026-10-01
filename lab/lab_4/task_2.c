#include <stdio.h>

// 2. Өгөгдсөн n тоог гараас оруулан 𝑛-ээс 1 хүртэлх бүх тоог хэвлэ. Жишээ нь 𝑛 = 5 бол 5, 4,
// 3, 2, 1 гэж хэвлэнэ.

void main(){
    int n;
    printf("Enter =\n");
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        printf("%d\n", i);
    }
}