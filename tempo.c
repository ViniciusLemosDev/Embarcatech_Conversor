#include <stdio.h>
#include "tempo.h"

// Fun��o principal para executar as convers�es
void executarConversao() {
    int opcao;
    float valor, resultado;

    printf("=== Conversor de Unidades de Tempo ===\n");
    printf("Escolha uma convers�o:\n");
    printf("1 - Segundos para Minutos\n");
    printf("2 - Minutos para Segundos\n");
    printf("3 - Minutos para Horas\n");
    printf("4 - Horas para Minutos\n");
    printf("Digite a op��o desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em Segundos: ");
            scanf("%f", &valor);
            resultado = segundosParaMinutos(valor);
            printf("%.2f segundos equivale a %.2f minutos\n", valor, resultado);
            break;
        case 2:
            printf("Digite o valor em Minutos: ");
            scanf("%f", &valor);
            resultado = minutosParaSegundos(valor);
            printf("%.2f minutos equivale a %.2f segundos\n", valor, resultado);
            break;
        case 3:
            printf("Digite o valor em Minutos: ");
            scanf("%f", &valor);
            resultado = minutosParaHoras(valor);
            printf("%.2f minutos equivale a %.2f horas\n", valor, resultado);
            break;
        case 4:
            printf("Digite o valor em Horas: ");
            scanf("%f", &valor);
            resultado = horasParaMinutos(valor);
            printf("%.2f horas equivale a %.2f minutos\n", valor, resultado);
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
}
