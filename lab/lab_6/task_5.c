// n (1 ≤ n ≤ 100) ширхэг тоонуудыг гараас уншиж хүснэгтэд хадгална. 
// Уг хүснэгтийг өсөхөөр эрэмбэлэгдсэн, буурахаар эрэмбэлэгдсэн эсвэл эрэмбэлэгдээгүй эсэхийг тогтоо.

#include <stdio.h>

int main(void){
    int n;

    printf("array length: \n");
    scanf("%d", &n);

    if(!(1 <= n && n <= 100 )){
        printf("Number is not valid");
    }

    int arr[n];

    printf("Array numbers: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d\n",arr[0]);

    return 0;
}