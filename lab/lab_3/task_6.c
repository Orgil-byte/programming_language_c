#include <stdio.h>

// 6. Он, сар өгөгдөхөд одоо, ирээдүй, өнгөрсөн эсэхийг шалга.
 
void main(){
    int year, month, curYear, curMonth;
 
    printf("6. Enter today's year and month=\n");
    scanf("%d %d", &curYear, &curMonth);
    printf("6. Enter the year and month to check=\n");
    scanf("%d %d", &year, &month);
 
    if(year < curYear){
        printf("6. ugnuruh\n");
    }else if(year > curYear){
        printf("6. iriedui\n");
    }else{

        if(month < curMonth){
            printf("6. ungursun\n");
        }else if(month > curMonth){
            printf("6. iriedui\n");
        }else{
            printf("6. odoo\n");
        }
    }
}
