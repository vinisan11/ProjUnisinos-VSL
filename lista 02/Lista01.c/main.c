#include <stdio.h>

int main()
{
    int num ;
    int num2;
    printf("Programa divide somenete se for 0 \n");
    scanf("%d", &num); 
    scanf("%d", &num2);
    if (num && num2 != 0){
        printf("Resultado: %d", num /num2);       
    }else{
        printf("Primeiro ou Segundo numero = 0");    
    }

    return 0;
}