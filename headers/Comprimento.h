#ifndef COMPRIMENTO_H
#define COMPRIMENTO_H

#include <stdio.h>

static double comprimento(int unidadeOrigem, int unidadeDestino, double valor) {
    double resultado = 0.0;

    switch (unidadeOrigem) {
        case 1: // Metros como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor = valor;
                    printf("A unidade informada é a mesma da origem!\n"); // m -> m
                    break;
                case 2:
                    resultado = valor * 100.0; // m -> cm
                    break;
                case 3:
                    resultado = valor * 1000.0; // m -> mm
                    break;
                default:
                    printf("Conversão inválida!\n");
                    return -1;
            }
            break;

        case 2: // CentÃ­metros como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor / 100.0; // cm -> m
                    break;
                case 2:
                    resultado = valor = valor;
                    printf("A unidade informada é a mesma da origem!\n"); // cm -> cm
                    break;
                case 3:
                    resultado = valor * 10.0; // cm -> mm
                    break;
                default:
                    printf("Conversão inválida!\n");
                    return -1;
            }
            break;

        case 3: // MilÃ­metros como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor / 1000.0; // mm -> m
                    break;
                case 2:
                    resultado = valor / 10.0; // mm -> cm
                    break;
                case 3:
                    resultado = valor = valor;
                    printf("A unidade informada é a mesma da origem!\n"); // mm -> mm
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

#endif
