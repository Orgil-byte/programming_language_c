// A[n], B[m] хүснэгтүүдийг гараас уншиж, 
// A хүснэгтийн элементүүдтэй тэнцүү байх элементүүд B хүснэгтэд байгаа эсэхийг шалгаж, 
// тэдгээр тэнцүү элементүүдийг хэвлэн харуул.

#include <stdio.h>

void main(){
    int i, j;

    int n;
    printf("husnegtuudiin hemjee");
    scanf("%d", &n);

    int A[n], B[n];
    printf("A Husnegted %d too hiinuu", n);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }

    printf("B Husnegted %d too hiinuu", n);
    for(i = 0; i < n; i++){
        scanf("%d", &B[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(A[i] == B[j]){
                printf("%d, ", A[i]);
            }
        }
    }
    printf("\n");

    
}