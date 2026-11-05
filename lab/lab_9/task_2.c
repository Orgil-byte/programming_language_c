#include <stdio.h>

void main(){
    int n, a;
    printf("How many numbers in array?");
    scanf("%d", &n);
    printf("Name of the array?");
    scanf("%c", &a);

    read(a, n);
}

void read (int a[], int n){
    printf("write %d numbers", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    print(a, n);
}

void print (int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%d, ", a[i]);
    }
    printf("\n");
}

main();