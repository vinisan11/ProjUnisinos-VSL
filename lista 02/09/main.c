/******************************************************************************

Durante uma liquidação uma loja resolveu dar quinze por cento de desconto nas compras feitas pelos
clientes. Faça um programa que leia o valor da compra e escreva o valor da compra com o desconto.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Hello World");
    
    int valor = 20;
    float desconto = valor - valor * 0.15;
    
    printf("Valor total: %d Com desconto: %f", valor, desconto);

    return 0;
}
