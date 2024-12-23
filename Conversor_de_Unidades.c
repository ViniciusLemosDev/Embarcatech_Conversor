#include <stdio.h>
#include <locale.h>
#include "Comprimento.h"

int main() {
    
    setlocale(LC_ALL, "Portuguese_Brazil");

    double valor, resultado;
    int tipoUnidade, unidadeOrigem, unidadeDestino;

    printf("Escolha uma das convers�es:\n"
           "1 - Unidades de Comprimento\n"
           "2 - Unidades de Massa\n"
           "3 - Unidades de Volume\n"
           "4 - Unidades de Temperatura\n"
           "5 - Unidades de Velocidade\n"
           "6 - Unidades de Energia\n"
           "7 - Unidades de �rea\n"
           "8 - Unidades de Tempo\n"
           "9 - Unidades de Mem�ria\n");
    scanf("%d", &tipoUnidade);

    switch (tipoUnidade) {
        case 1: // Unidades de Comprimento
            printf("Digite a unidade de origem (1. metro, 2. cent�metro, 3. mil�metro):\n");
            scanf("%d", &unidadeOrigem);

            printf("Digite a unidade de destino (1. metro, 2. cent�metro, 3. mil�metro):\n");
            scanf("%d", &unidadeDestino);

            printf("Digite o valor a ser convertido:\n");
            scanf("%lf", &valor);

            resultado = comprimento(unidadeOrigem, unidadeDestino, valor);

            if (resultado >= 0) {
    if ((unidadeOrigem == 1 && unidadeDestino == 2) || (unidadeOrigem == 2 && unidadeDestino == 3)) {
        printf("O resultado da convers�o �: %.3lf\n", resultado);
    } else {
        printf("O resultado da convers�o �: %.4lf\n", resultado);
    }
}

            break;

        default:
            printf("Convers�o inv�lida\n");
            break;
    }

    return 0;
}
