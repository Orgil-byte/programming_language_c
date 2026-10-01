#include <stdio.h>
#include <math.h>

// 3. (𝑥1, 𝑦1), (𝑥2, 𝑦2), (𝑥3, 𝑦3) гэсэн гурван цэгийн координат өгөгдсөн бол
// координатын эхээс хамгийн ойр ба хол орших хоёр цэгийг ол
 
void main(){
    float x1, y1, x2, y2, x3, y3, a, b, c;
 
    printf("3. Enter x1, y1, x2, y2, x3, y3=\n");
    scanf("%f%f%f%f%f%f", &x1,&y1,&x2,&y2,&x3,&y3);
    printf("3. (x1 = %g, y1 = %g), (x2 = %g, y2 = %g), (x3 = %g, y3 = %g)\n", x1, y1, x2, y2, x3, y3);
    
    a = sqrt(pow(x1, 2) + pow(y1, 2));
    b = sqrt(pow(x2, 2) + pow(y2, 2));
    c = sqrt(pow(x3, 2) + pow(y3, 2));
    if(a >= b && b >= c){
        printf("3. (x1 = %g, y1 = %g) is furthest and (x3 = %g, y3 = %g) is closest\n", x1, y1, x3, y3);
    }else if(b >= a && a >= c){
        printf("3. (x2 = %g, y2 = %g) is furthest and (x3 = %g, y3 = %g) is closest\n", x2, y2, x3, y3);
    }else if(a >= c && c >= b){
        printf("3. (x1 = %g, y1 = %g) is furthest and (x2 = %g, y2 = %g) is closest\n", x1, y1, x2, y2);
    }else if(b >= c && c >= a){
        printf("3. (x2 = %g, y2 = %g) is furthest and (x1 = %g, y1 = %g) is closest\n", x2, y2, x1, y1);
    }else if(c >= b && b >= a){
        printf("3. (x3 = %g, y3 = %g) is furthest and (x1 = %g, y1 = %g) is closest\n", x3, y3, x1, y1);
    }else{
        printf("3. (x3 = %g, y3 = %g) is furthest and (x2 = %g, y2 = %g) is closest\n", x3, y3, x2, y2);
    }
}