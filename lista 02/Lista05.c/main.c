#include <stdio.h>

int main()
{
    printf("Informar se ele é par ou impa\n");

    int num;
    scanf("%d", &num);
    
    if(num % 2 ==0){
        printf("é par");
    }
    else{
        printf("impar");
    }
    return 0;
}
