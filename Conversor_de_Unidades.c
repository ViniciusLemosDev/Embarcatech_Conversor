#include <stdio.h>
#include <locale.h>
#include "massa.h"

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double valor, resultado;
    int tipoUnidade, unidadeOrigem, unidadeDestino;
    
    do {
        printf("\nEscolha uma das conversões:\n"
               "1 - Unidades de Comprimento\n"
               "2 - Unidades de Massa\n"
               "3 - Unidades de Volume\n"
               "4 - Unidades de Temperatura\n"
               "5 - Unidades de Velocidade\n"
               "6 - Unidades de Energia\n"
               "7 - Unidades de Área\n"
               "8 - Unidades de Tempo\n"
               "9 - Unidades de Memória\n"
               "0 - Para sair!\n");
        scanf("%d", &tipoUnidade);

        switch (tipoUnidade) {
        case 1:
            printf("Digite a unidade de origem (metro, centímetro, milímetro):\n");
            scanf("%d", &unidadeOrigem);

            printf("Digite a unidade de destino (metro, centímetro, milímetro):\n");
            scanf("%d", &unidadeDestino);

            printf("Digite o valor a ser convertido:\n");
            scanf("%lf", &valor);
            break;
        case 2: // Unidades de Massa
            printf("\nDigite o número da unidade de origem (1. quilograma, 2. grama, 3. tonelada):\n");
            scanf("%d", &unidadeOrigem);

            printf("Digite o número da unidade de destino (1. quilograma, 2. grama, 3. tonelada):\n");
            scanf("%d", &unidadeDestino);

            printf("Digite o valor a ser convertido:\n");
            scanf("%lf", &valor);

            resultado = massa(unidadeOrigem, unidadeDestino, valor);

            if (resultado != -1) {
                printf("\nResultado da conversão: %.2lf\n", resultado);
            } else {
                printf("\nErro na conversão.\n");
            }

            printf("Pressione Enter para continuar...\n");
            while (getchar() != '\n'); // Limpa buffer
            getchar(); // Aguarda Enter
            break;

        case 0: // Sair do programa
            printf("\nEncerrando o programa.\n");
            break;

        default:
            printf("\nConversão inválida ou não implementada.\n");
            printf("Pressione Enter para continuar...\n");
            while (getchar() != '\n'); // Limpa buffer
            getchar(); // Aguarda Enter
            break;
        }
    } while (tipoUnidade != 0);

    return 0;
}
