#include <stdio.h>
// 1. Өгөгдсөн 𝑛 тоог гараас оруулан 𝑛 удаа “Programming C” гэдэг үгийг хэвлэ.

void main(){
    int n;
    printf("How many times to print=\n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Programming C\n");
    }
}