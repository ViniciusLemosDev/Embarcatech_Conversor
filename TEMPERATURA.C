#include <stdio.h>
#include "Temperatura.h"
#include "locale.h"

double temperatura(int unidadeOrigem, int unidadeDestino, double valor)
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    double resultado = 0.0;

    switch (unidadeOrigem) {
    case 1: // Celsius
        switch (unidadeDestino) {
        case 1:
            printf("A unidade informada é a mesma da origem!\n");
            return -1; 
        case 2: // Celsius para Fahrenheit
            resultado = (valor * 9/5) + 32;
            break;
        case 3: // Celsius para Kelvin
            resultado = valor + 273.15;
            break;
        default:
            printf("Conversão inválida!\n");
            return -1;
        }
        break;

    case 2: // Fahrenheit
        switch (unidadeDestino) {
        case 1: // Fahrenheit para Celsius
            resultado = (valor - 32) * 5/9;
            break;
        case 2:
            printf("A unidade informada é a mesma da origem!\n");
            return -1;
        case 3: // Fahrenheit para Kelvin
            resultado = (valor - 32) * 5/9 + 273.15;
            break;
        default:
            printf("Conversão inválida!\n");
            return -1;
        }
        break;

    case 3: // Kelvin
        switch (unidadeDestino) {
        case 1: // Kelvin para Celsius
            resultado = valor - 273.15;
            break;
        case 2: // Kelvin para Fahrenheit
            resultado = (valor - 273.15) * 9/5 + 32;
            break;
        case 3:
            printf("A unidade informada é a mesma da origem!\n");
            return -1;
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
