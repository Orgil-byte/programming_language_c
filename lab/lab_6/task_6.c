// A[n][m] (1 ≤ n, m ≤ 100) хүснэгтийн элементүүдийг гараас уншин, уг хүснэгтийн хамгийн бага ба хамгийн их элементүүдийг ол.

#include <stdio.h>

void main(){
    int n, m;
    printf("row bas column hed we? ");
    scanf("%d %d", &n, &m);

    if(n <= 1 || m >= 100){
        printf("Dahiad oruulna uu. Utguud zuw bish");
    }

    int A[n][m];
    printf("%d too oruul. ", n * m);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }

    int max = A[0][0];
    int min = A[0][0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(A[i][j] > max){
                max = A[i][j];
            }

            if(A[i][j] < min){
                min = A[i][j];
            }
        }
    }

    printf("min = %d, max = %d\n", min, max);

}