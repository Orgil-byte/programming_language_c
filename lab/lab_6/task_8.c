// A[n], B[m] хүснэгтүүдийн элементүүдийг гараас уншиж, C хүснэгтэд A ∪ B олонлогийн элементүүдийг хадгалан хэвлэ. 
// Өөрөөр хэлбэл A-д байх бүх элементийг, 
// B-д байх бүх элементүүдийг давхарлуулахгүйгээр C хүснэгтэд хадгалж хэвлэн харуул.

// Оролт:

// Эхний мөрөнд 2 хүснэгтийн элементийн тоо (n,m) өгөгдөнө.
// 2 дахь мөрөнд эхний хүснэгтийн элементүүдийн утга өгөгдөнө.
// 3 дахь мөрөнд дараагийн хүснэгтийн элементүүдийн утга өгөгдөнө.
// Жишээ оролт:

// 6 3
// 1 3 7 1 3 2
// 1 5 3
// Жишээ гаралт:

// 3 7 1 5 2
#include <stdio.h>

int main(void){
    int m, n, i, k = 0, j, size;
    printf("A husnegtiin hemjee ");
    scanf("%d", &n);
    printf("B husnegtiin hemjee ");
    scanf("%d", &m);

    size = n + m;
    int A[n], B[m], C[size];

    printf("A husnegted %d hiinuu ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
        C[k++] = A[i];
    }

    printf("B husnegted %d hiinuu ", m);
    for(i = 0; i < m; i++){
        scanf("%d", &B[i]);
        C[k++] = B[i];
    }

    for(i = 0; i < size; i++){
        for(j = i + 1; j < size; j++){
            if(C[i] == C[j]){
                C[i] = C[size - 1];
                
                size--;
                j--;
                printf("%d ",C[size]);
            }
        }
    }
    for(i = 0; i < size; i++){
        printf("%d ", C[i]);
    }
    printf("\n");
}