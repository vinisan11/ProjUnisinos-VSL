/******************************************************************************

Um usuário deseja converter a temperatura de Celsius para Fahrenheit. Escreva um programa que leia
a temperatura em Celsius e exiba a temperatura equivalente em Fahrenheit.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Digite sua temp em Celsius");

    int temp_C;
    
    scanf("%d" , &temp_C);
    float Fahrenheit = temp_C * 1.8 + 32.0;
    
    
    printf("Conversão deu: %f", Fahrenheit);

    return 0;
}
