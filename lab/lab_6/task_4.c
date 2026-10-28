#include <stdio.h>

// n, m (1 ≤ n, m ≤ 100) хоёр тоо өгөгдвөл, n ширхэг тоонуудыг гараас уншин A хүснэгтэд хадгална. 
// Мөн m ширхэг тоонуудыг гараас уншин B хүснэгтэд хадгална. 
// A, B хүснэгтийн элементүүдийг нэгтгэн C хүснэгтэд хадгалж, уг C хүснэгтийн элементүүдийг хэвлэ.

int main(void){
    int n, m;

    printf("A array length\n");
    scanf("%d", &n);
    printf("B array length\n");
    scanf("%d", &m);

    if(1 >= n || m >= 100){
        printf("The array length is not correct");
    }

    int a[n], b[m], c[n + m];

    printf("A array numbers\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        c[i] = a[i];
    }

    printf("B array numbers\n");
    for(int i = 0; i < m; i++){
        scanf("%d", &b[i]);
        c[n + i] = b[i];
    }

    for(int i = 0; i < n + m; i++){
        printf("%d\n", c[i]);
    }

    

    return 0;
}