/******************************************************************************

O lojista gostou tanto do seu programa anterior que encomendou outro. Dessa vez ele quer que você
calcule quanto cada cliente gastou na loja apenas informando o número de camisetas, calças e cintos
comprados. As camisetas custam R$ 25,00, as calças R$ 100,00 e os cintos R$ 40,00. Some o valor da
compra e ao final dê um desconto de 10 por cento sobre o total. Exiba na tela o valor do desconto e
o valor da compra

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("Insira o nessa ordem quanridade de: camisas, calças, cintos ");
    
    int valor_cam = 25.00;
    int valor_cal = 100.00;
    int valor_cin = 40.00;
    
    int calca ;
    int camisas ;
    int cintos ;
    scanf("%d %d %d", &camisas ,&calca ,&cintos);
    int valor_total = camisas *valor_cam + calca *valor_cal + cintos *valor_cin;
    float desconto = valor_total - valor_total * 0.10;
    
    printf("Valor total: %d Com desconto: %f", valor_total, desconto);

    return 0;
}