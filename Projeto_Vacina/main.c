/******************************************************************************

Entrada de Dados: se o usuário escolher a opção 1, o programa solicita as seguintes informações:
• População total: (int > 0)
• Número de pessoas inicialmente infectadas: (int > 0)
• Taxa de contágio: (0 a 100%)
• Porcentagem da população vacinada: (0 a 100%)
• Efetividade da vacina: (0 a 100%) – representa a chance de uma pessoa vacinada não ser infectada
• Número de dias da simulação

******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int respota_incial;

    printf("1. Nova Simulacao\n2. Sair do Programa\n");
    scanf("%d", &respota_incial);

    int pop_total = -1;
    int pop_infec = -1;
    float taxa_de_cont = -1;
    float pop_vaci_per = -1;
    float vaci_efeti = -1;
    int dias = -1;

    if (respota_incial == 1) {
        printf("Digite:\nPopulação total: \nNúmero de pessoas inicialmente infectadas:\nTaxa de contágio: \nPorcentagem da população vacinada: \nEfetividade da vacina:\nNúmero de dias da simulação:\n");

        while (pop_total < 0) scanf("%d", &pop_total);
        while (pop_infec < 0) scanf("%d", &pop_infec);
        while (taxa_de_cont <= 0 || taxa_de_cont >= 100) scanf("%f", &taxa_de_cont);
        while (pop_vaci_per <= 0 || pop_vaci_per >= 100) scanf("%f", &pop_vaci_per);
        while (vaci_efeti <= 0 || vaci_efeti >= 100) scanf("%f", &vaci_efeti);
        while (dias <= 0) scanf("%d", &dias);

        printf("\nConfiguração concluída com sucesso.\n");
        printf("Pressione [ENTER] para iniciar a simulação...\n");
        while (getchar() != '\n');
        getchar();

        int pop_vaci = pop_total * (pop_vaci_per * 0.01);
        int pop_N_vacina_saud = pop_total - pop_vaci;
        int suscetiveis = pop_N_vacina_saud + pop_vaci * (1 - (vaci_efeti / 100));
        
        printf("----------------------------------------------\n");
        
        printf("População: %d\n", pop_total);
        printf("Infectados iniciais: %d\n", pop_infec);
        printf("Taxa de contágio (0-100): %.0f\n", taxa_de_cont);
        printf("População vacinada (0-100): %d\n", pop_vaci);
        printf("Efetividade da vacina (0-100): %.0f\n", vaci_efeti);
        printf("Dias simulados: %d\n", dias);
        printf("\n");

        for (int dia = 1; dia <= dias; dia++) {
            int n_ale = rand() % 101;
            int novos_infec = pop_infec * (taxa_de_cont / 100);

            if (n_ale >= 1 && n_ale <= 15) {
                taxa_de_cont *= 1.25;
            } else if (n_ale >= 16 && n_ale <= 26) {
                taxa_de_cont *= 0.20;
            } else if (n_ale >= 27 && n_ale <= 32) {
                taxa_de_cont *= 0.30;
            } else if (n_ale >= 33 && n_ale <= 38) {
                taxa_de_cont *= 1.50;
            }

            if (novos_infec + pop_infec > suscetiveis)
                novos_infec = suscetiveis - pop_infec;

            if (novos_infec < 0) novos_infec = 0;

            int total_hoje = pop_infec + novos_infec;

            if (novos_infec == 0) {
                printf("Dia %d: %d infectados\n", dia, total_hoje);
            } else {
                printf("Dia %d: %d infectados (+%d)", dia, total_hoje, novos_infec);

                if (n_ale >= 1 && n_ale <= 15)
                    printf(" (evento: Aglomeração!)");
                else if (n_ale >= 16 && n_ale <= 26)
                    printf(" (evento: Isolamento voluntário!)");
                else if (n_ale >= 27 && n_ale <= 32)
                    printf(" (evento: Mídia gera alerta!)");
                else if (n_ale >= 33 && n_ale <= 38)
                    printf(" (evento: Mutação mais contagiosa!)");

                printf("\n");
            }
           

            pop_infec += novos_infec;
        }
        printf("\n");
        int total_infec = pop_infec;
        int vaci_infec_pop = pop_vaci * (1 - (vaci_efeti / 100));
        int pop_final_saud = pop_total - total_infec;

        printf("Total infectados: %d\n", total_infec);
        printf("População vacinada: %d\n", pop_vaci);
        printf("Vacinados infectados: %d\n", vaci_infec_pop);
        printf("População saudável: %d\n", pop_final_saud);
        printf("----------------------------------------------");
    }
        
    else if (respota_incial == 2) {
        printf("Encerrando Programa...\n");
        return 1;
    }

    return 0;
}