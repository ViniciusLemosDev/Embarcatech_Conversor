#include <stdio.h>
#include "massa.h"
#include "locale.h"

double massa(int unidadeOrigem, int unidadeDestino, double valor)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    double resultado = 0.0;

    switch (unidadeOrigem) {
    case 1: // quilograma
        switch (unidadeDestino) {
        case 1:
            printf("A unidade informada é a mesma da origem!\n");
            break;
        case 2:
            resultado = valor * 1000.0; // quilograma para grama
            break;
        case 3:
            resultado = valor / 1000.0; // quilograma para tonelada
            break;
        default:
            printf("Conversão inválida!\n");
            return -1;
        }
        break;

    case 2: // grama
        switch (unidadeDestino) {
        case 1:
            resultado = valor / 1000.0; // grama para quilograma
            break;
        case 2:
            printf("A unidade informada é a mesma da origem!\n");
            break;
        case 3:
            resultado = valor / 1000000.0; // grama para tonelada
            break;
        default:
            printf("Conversão inválida!\n");
            return -1;
        }
        break;

    case 3: // tonelada
        switch (unidadeDestino) {
        case 1:
            resultado = valor * 1000.0; // tonelada para quilograma
            break;
        case 2:
            resultado = valor * 1000000.0; // tonelada para grama
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
