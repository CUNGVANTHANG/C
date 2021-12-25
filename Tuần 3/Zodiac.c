#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    if((b == 3 && a >= 21)
    ||( b == 4 && a <= 19)){
        printf("Bach Duong");
    }
    if((b == 4 && a >= 20)
    ||( b == 5 && a <= 20)){
        printf("Kim Nguu");
    }
    if((b == 5 && a >= 21)
    ||( b == 6 && a <= 21)){
        printf("Song Tu");
    }
    if((b == 6 && a >= 22)
    ||( b == 7 && a <= 22)){
        printf("Cu Giai");
    }
    if((b == 7 && a >= 23)
    ||( b == 8 && a <= 22)){
        printf("Su Tu");
    }
    if((b == 8 && a >= 23)
    ||( b == 9 && a <= 22)){
        printf("Xu Nu");
    }
    if((b == 9 && a >= 23)
    ||( b == 10 && a <= 23)){
        printf("Thien Binh");
    }
    if((b == 10 && a >= 24)
    ||( b == 11 && a <= 22)){
        printf("Thien Yet");
    }
    if((b == 11 && a >= 23)
    ||( b == 12 && a <= 21)){
        printf("Nhan Ma");
    }
    if((b == 12 && a >= 22)
    ||( b == 1 && a <= 19)){
        printf("Ma Ket");
    }
    if((b == 1 && a >= 20)
    ||( b == 2 && a <= 18)){
        printf("Bao Binh");
    }
    if((b == 2 && a >= 19)
    ||( b == 3 && a <= 20)){
        printf("Song Ngu");
    }
}
