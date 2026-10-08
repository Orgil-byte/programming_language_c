#include <stdio.h>

void main(){
    int month;
    printf("which month: \n");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("%d month has 31 days\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("%d month has 30 days\n", month);
            break;
        case 2:
            printf("%d month has 28/29 days\n", month);
            break;
}   
}