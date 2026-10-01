#include <stdio.h>

// 4. Доорх зураг дээрхи схемийн дагуу програм зохио. Сонголтуудыг тоогоор илэрхийлэн
// гараас уншина.
 
void main(){
    int a, b, c, d, e, f, g, h, i, j, k;
    printf("Wanna eat soup?\n");
    scanf("%d", &a);
    if(a == 1){
        printf("Цайтай бол тийм, үгүй бол шөлтэй байх\n");
        scanf("%d", &b);
        if(b == 1){
            printf("Будаатай бол тийм, үгүй бол банштай байх\n");
            scanf("%d", &c);
            if(c == 1){
                printf("Budaatai tsai\n");
            }
            if(c == 2){
                printf("Banshtai tsai\n");
            }
        }
        if(b == 2){
            printf("Ямар орцтой шөл идмээр байна?\n");
            printf("1. Guriltai 2. Puntuuztei 3. Goimontoi 4. Banshtai 5. Mahtai 6. Nogootoi\n");
            scanf("%d", &d);
            if(d == 1){
                printf("Guriltai shul\n");
            }
            if(d == 2){
                printf("Huitsaa\n");
            }
            if(d == 3){
                printf("Goimontoi shul\n");
            }
            if(d == 4){
                printf("Banshtai shul\n");
            }
            if(d == 5){
                printf("Har shul\n");
            }
            if(d == 6){
                printf("Nogootoi shul\n");
            }
        }
    }
 
    if(a ==2){
        printf("Mahaa tatsanuu?\n");
        scanf("%d", &e);
        if(e ==1){
            printf("Gurild oroosnuu?\n");
            scanf("%d", &f);
            if(f == 1){
                printf("Yaj bolgoson?\n");
                printf("1. Sharsan 2. Jignesen\n");
                scanf("%d", &i);
                if(i == 1){
                    printf("Yaj sharsan?\n");
                    printf("1. Huulguj 2. shuud\n");
                    scanf("%d", &j);
                    if(j == 1){
                        printf("Piroshki\n");
                    }else{
                        printf("Huushuur\n");
                    }
                }
                if(i == 2){
                    printf("Yaj jignesen?\n");
                    printf("1. Huulguj 2. shuud\n");
                    scanf("%d", &j);
                    if(j == 1){
                        printf("Mantuun buuz\n");
                    }
                    if(j == 2){
                        printf("Buuz\n");
                    }
                }
            }
            if(f == 2){
                printf("Budaatai yu?\n");
                printf("1. Undugtei 2. Tefteli\n");
                scanf("%d", &h);
                if(h == 1){
                    printf("Undugtei bifshteks\n");
                }
                if(h ==2){
                    printf("Tefteli\n");
                }
            }
        }
        if(e== 2){
            printf("Yutai holison\n");
            printf("1. Guriltai 2. Undugtei 3. Budaatai 4. Nogootoi\n");
            scanf("%d", &g);
            if(g == 1){
                printf("Tsuivan\n");
            }
            if(g == 2){
                printf("Undugtei huurga\n");
            }
            if(g == 3){
                printf("Hoorond ni holih uu?\n");
                scanf("%d", &k);
                if(k==1){
                    printf("Guliyash\n");
                }else{
                    printf("Budaatai huurga\n");
                }
            }
            if(g == 4){
                printf("Nogootoi huurga\n");
            }
        }
    }
 
}
