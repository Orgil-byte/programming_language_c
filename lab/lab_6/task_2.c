#include <stdio.h>

int main(void) {
    int arr[100];
    int n;

    printf("n (1..100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("n 1-ees 100 hoorond baih yostoi\n");
        return 1;
    }

    printf("the numbers:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}