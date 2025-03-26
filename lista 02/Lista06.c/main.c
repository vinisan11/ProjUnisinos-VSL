/******************************************************************************

Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. 
Depois
disso, peça para ele digitar um número de 0 a 5 
(como se fosse mostrar os dedos da mão. Sorteie
um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu 
PAR e o valor da
soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
que o programa venceu 




    // Generate a random number between 1 and 100
    int random_number = rand() % 100 + 1;

    printf("Random number: %d\n", random_number);

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Brincadeira Impar par");
    
    srand(time(0));
    int escolha;
    int num = -1 ;
    int random_num = rand() % 5 + 0;
    printf("Você quer impar par\n(1):par\n(2):impar\n ");
    scanf("%d", &escolha);
    
    if (escolha == 1){
        printf("Você escolheu par\nEcolha um Numero de 0 a 5\n");
            while (num < 0 || num >5) {
        scanf("%d", &num);
            printf("Digite um Numero entre 0 e 5");
            while(getchar() != '\n');
        }
        random_num;
        int soma_par = num + random_num;
                if (soma_par % 2 == 0){
                printf("Você venceu! %d + %d = %d",num, random_num, soma_par);
                }
                else{
                printf("Computadaor venceu! %d + %d = %d",num, random_num, soma_par);
            }
    }
    else if (escolha == 2){
        
        printf("Você escolheu impar\nEcolha um Numero de 0 a 5\n");
            while (num < 0 || num >5) {
        scanf("%d", &num);
            printf("Digite um Numero entre 0 e 5");
            while(getchar() != '\n');
        }
        random_num;
        int soma_impar = num + random_num ;
            if (soma_impar % 2 != 0){
            printf("Você venceu! %d + %d = %d",num, random_num, soma_impar );
            }else{
                printf("Computadaor venceu! %d + %d = %d",num, random_num, soma_impar);
            }
    
    }
    
    return 0;
}
