// n (1 ≤ n ≤ 100) ширхэг тоонуудыг гараас уншиж хүснэгтэд хадгална. 
// X тоог гараас уншиж, уг тоо хүснэгтээс олдвол уг тооны байрлалын дугаарыг хэвлэн харуул. 
// X тоо олон удаа олдвол олдсон байрлал тус бүрийг хэвлэнэ. Хэрэв байхгүй бол -1 гэж хэвлэ.

#include <stdio.h>

int main(void) {
    int arr[100];
    int n, x;

    printf("n (1..100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("n 1-ees 100 hoorond baih yostoi\n");
    }

    printf("the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("x number\n");
    scanf("%d", &x);

    for (int i = 0; i < n; i++){
        if(i + 1 == x){
            printf("bairlal: %d, too: %d\n", i, arr[i]);
        }else{
            printf("Too bhgui\n");
        }
    }

    return 0;
}