/******************************************************************************

Um criador de pássaros deseja saber a quantidade de ração diária necessária para alimentar seus
pássaros. Cada pássaro consome 30 gramas de ração por dia. Escreva um programa que leia o número
de pássaros que o criador possui e calcule a quantidade total de ração necessária por dia.


*******************************************************************************/
#include <stdio.h>
#include <stdio.h>

int main()
{
    printf("Digite sua quantidade de passaros ");
    
    
    
    int passaros ;
    int gramas_total ;
    
    scanf("%d",&passaros );
    gramas_total = passaros * 30;
    
    printf("\nTotal de gramas por dia: %d", gramas_total);

    return 0;
}