#include <stdio.h>
#include "../headers/area.h"
#include "locale.h"

// 1 m = 10000 cm

double converte_area(int unidadeOrigem, int unidadeDestino, double valor)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    double resultado = 0.0;

    if (valor < 0)
    {
        printf("Valor de área inválido (deve ser positivo).\n");
        return -1;
    }

    switch (unidadeOrigem)
    {
    case 1: // metros quadrados
        switch (unidadeDestino)
        {
        case 1:
            resultado = valor = valor;
            printf("A unidade informada é a mesma da origem!\n");
            break;

        case 2:
            resultado = valor * 10000; // m -> cm

            break;

        default:
            printf("Conversão inválida!\n");
            return -1;
        }
        break;

    case 2: // cent metros quadrados
        switch (unidadeDestino)
        {
        case 1:
            resultado = valor / 10000; // cm -> m
            break;

        case 2:
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
