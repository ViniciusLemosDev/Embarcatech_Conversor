#include <stdio.h>
#include "../headers/tempo.h"
#include <locale.h>

double tempo(int unidadeOrigem, int unidadeDestino, double valor) {
    setlocale(LC_ALL, "Portuguese_Brazil"); // Define o locale para portuguÃªs (opcional, mas recomendado)
    double resultado = 0.0;

    switch (unidadeOrigem) {
        case 1: // Segundos
            switch (unidadeDestino) {
                case 1:
                    resultado = valor = valor;
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
                    resultado = valor = valor;
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
                    resultado = valor = valor;
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
