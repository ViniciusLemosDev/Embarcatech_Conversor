#include <stdio.h>
#include <locale.h>
#include "tempo.h"

double tempo(int unidadeOrigem, int unidadeDestino, double valor) {
    setlocale(LC_ALL, "Portuguese_Brazil"); // Define o locale para português (opcional, mas recomendado)
    double resultado = 0.0;

    switch (unidadeOrigem) {
        case 1: // Segundos
            switch (unidadeDestino) {
                case 1:
                    printf("A unidade informada é a mesma da origem!\n");
                    break;
                case 2:
                    resultado = valor / 60.0; // Segundos para Minutos
                    break;
                case 3:
                    resultado = valor / 3600.0; // Segundos para Horas (60 * 60)
                    break;
                default:
                    printf("Conversão inválida!\n");
                    return -1; // Retorna -1 para indicar erro
            }
            break;

        case 2: // Minutos
            switch (unidadeDestino) {
                case 1:
                    resultado = valor * 60.0; // Minutos para Segundos
                    break;
                case 2:
                    printf("A unidade informada é a mesma da origem!\n");
                    break;
                case 3:
                    resultado = valor / 60.0; // Minutos para Horas
                    break;
                default:
                    printf("Conversão inválida!\n");
                    return -1;
            }
            break;

        case 3: // Horas
            switch (unidadeDestino) {
                case 1:
                    resultado = valor * 3600.0; // Horas para Segundos (60 * 60)
                    break;
                case 2:
                    resultado = valor * 60.0; // Horas para Minutos
                    break;
                case 3:
                    printf("A unidade informada é a mesma da origem!\n");
                    break;
                default:
                    printf("Conversão inválida!\n");
                    return -1;
            }
            break;

        default:
            printf("Conversão inválida!\n");
            return -1;
    }

    return resultado;
}

void executarConversaoTempo() {
    int unidadeOrigem, unidadeDestino;
    double valor, resultado;

    printf("\n=== Conversor de Unidades de Tempo ===\n");
    printf("Escolha a unidade de origem:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    if (scanf("%d", &unidadeOrigem) != 1) { // Verifica se a leitura foi bem-sucedida
        printf("Entrada inválida. Digite um número inteiro.\n");
        while (getchar() != '\n'); // Limpa o buffer de entrada
        return;
    }

    printf("Escolha a unidade de destino:\n");
    printf("1 - Segundos\n");
    printf("2 - Minutos\n");
    printf("3 - Horas\n");
    if (scanf("%d", &unidadeDestino) != 1) {
        printf("Entrada inválida. Digite um número inteiro.\n");
        while (getchar() != '\n');
        return;
    }

    printf("Digite o valor a ser convertido:\n");
    if (scanf("%lf", &valor) != 1) { // Usar %lf para double em scanf
        printf("Entrada inválida. Digite um número.\n");
        while (getchar() != '\n');
        return;
    }

    resultado = tempo(unidadeOrigem, unidadeDestino, valor);

    if (resultado != -1) { // Verifica se houve erro na conversão
        printf("O resultado da conversão é: %.2lf\n", resultado); // Usar %lf para double em printf
    }
}