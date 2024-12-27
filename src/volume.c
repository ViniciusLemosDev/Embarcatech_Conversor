#include <stdio.h>
#include "../headers/volume.h"

double Volume(int unidadeOrigem, int unidadeDestino, double valor) {
    double resultado = 0.0;

    switch (unidadeOrigem) {
        case 1: // Litros como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor = valor;
                    printf("A unidade informada � a mesma da origem!\n");
                    break;
                case 2:
                    resultado = valor * 1000.0; // Litros -> Mililitros
                    break;
                case 3:
                    resultado = valor / 1000.0; // Litros -> Metros c�bicos
                    break;
                default:
                    printf("Convers�o inv�lida!\n");
                    return -1;
            }
            break;

        case 2: // Mililitros como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor / 1000.0; // Mililitros -> Litros
                    break;
                case 2:
                    resultado = valor = valor;
                    printf("A unidade informada � a mesma da origem!\n");
                    break;
                case 3:
                    resultado = valor / 1e6; // Mililitros -> Metros c�bicos
                    break;
                default:
                    printf("Convers�o inv�lida!\n");
                    return -1;
            }
            break;

        case 3: // Metros cúbicos como origem
            switch (unidadeDestino) {
                case 1:
                    resultado = valor * 1000.0; // Metros c�bicos -> Litros
                    break;
                case 2:
                    resultado = valor * 1e6; // Metros c�bicos -> Mililitros
                    break;
                case 3:
                    resultado = valor = valor;
                    printf("A unidade informada � a mesma da origem!\n");
                    break;
                default:
                    printf("Convers�o inv�lida!\n");
                    return -1;
            }
            break;

        default:
            printf("Convers�o inv�lida!\n");
            return -1;
    }

    return resultado;
}
