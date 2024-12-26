#include <stdio.h>
#include "tempo.h"

// Função principal para realizar a conversão
void executarConversaoTempo() {
    int unidadeOrigem, unidadeDestino;
    float valor, resultado;

    printf("\n=== Conversor de Unidades de Tempo ===\n");
    printf("Escolha a unidade de origem:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    scanf("%d", &unidadeOrigem);

    printf("Escolha a unidade de destino:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    scanf("%d", &unidadeDestino);

    if (unidadeOrigem < 1 || unidadeOrigem > 3 || unidadeDestino < 1 || unidadeDestino > 3) {
        printf("Unidade inválida! Tente novamente.\n");
        return;
    }

    printf("Digite o valor a ser convertido:\n");
    scanf("%f", &valor);

    // Processa as conversões
    if (unidadeOrigem == 1 && unidadeDestino == 2) {
        resultado = segundosParaMinutos(valor);
    } else if (unidadeOrigem == 2 && unidadeDestino == 1) {
        resultado = minutosParaSegundos(valor);
    } else if (unidadeOrigem == 2 && unidadeDestino == 3) {
        resultado = minutosParaHoras(valor);
    } else if (unidadeOrigem == 3 && unidadeDestino == 2) {
        resultado = horasParaMinutos(valor);
    } else {
        resultado = valor; // Mesma unidade
    }

    printf("O resultado da conversão é: %.2f\n", resultado);
}
