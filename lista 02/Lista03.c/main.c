
#include <stdio.h>

int main()
{
    int num;
    printf("Progrma; Encontrar o dobro cajo ele seja + ou triblo caso seja - \n");
    scanf("%d" , &num);
    if (num > 0){
        int dobro = num *2;
        printf("Dobro: %d", dobro);
    }
    if (num < 0){
        int triplo = num *3;
        printf("triplo: %d", triplo);
    }
    if(num == 0){
        printf("Seu numero é 0");
    }
    return 0;
}
