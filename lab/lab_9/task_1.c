#include <stdio.h>

int is_even(int n){
    if(n % 2 == 0){
        printf("number is even\n");
    }else{
        printf("number is not even\n");
    }
}

int main(){
    is_even(2);
}