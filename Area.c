#include <stdio.h>
#include "area.h"
#include "locale.h"

// 1 m² = 10000 cm²

double converte_area(int unidade_origem, int unidade_destino, double valor)
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    if (valor < 0)
    {
        printf("Valor de área inválido (deve ser positivo).\n");
        return -1;
    }

    switch (unidade_origem)
    {
    case METROS:
        if (unidade_destino == CENTIMETROS)
        {
            return valor * 10000;
        }
        break;
    case CENTIMETROS:
        if (unidade_destino == METROS)
        {
            return valor / 10000;
        }
        break;
    default:
        printf("Unidades inválidas!\n");
        return -1;
    }

    return -1;
}