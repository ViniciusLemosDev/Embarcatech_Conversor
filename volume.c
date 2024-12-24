#include <stdio.h>
#include "volume.h"

double Volume(int unidadeOrigem, int unidadeDestino, double valor) {
    double resultado = 0.0;

    switch (unidadeOrigem) {
        case 1: // Litros como origem
            switch (unidadeDestino) {
                case 2:
                    resultado = valor * 1000.0; // Litros -> Mililitros
                    break;
                case 3:
                    resultado = valor / 1000.0; // Litros -> Metros cúbicos
                    break;
                default:
                    printf("Conversão inválida!\n");
                    return -1;
            }
            break;

        case 2: // Mililitros como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor / 1000.0; // Mililitros -> Litros
                    break;
                case 3:
                    resultado = valor / 1e6; // Mililitros -> Metros cúbicos
                    break;
                default:
                    printf("Conversão inválida!\n");
                    return -1;
            }
            break;

        case 3: // Metros cúbicos como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor * 1000.0; // Metros cúbicos -> Litros
                    break;
                case 2:
                    resultado = valor * 1e6; // Metros cúbicos -> Mililitros
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
