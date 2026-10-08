#include <stdio.h>

int main(void) {
    
    int x, y, z;

    for (z = 1; z <= 100; z++)
        for (x = 1; x <= z; x++)
            for (y = x; y <= z; y++)
                if (x*x + y*y == z*z)
                    printf("%d %d %d\n", x, y, z);
    return 0;
}