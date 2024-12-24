#include <stdio.h>
#include <locale.h>
#include "massa.c"
#include "massa.h"
#include "comprimento.h"
#include "Memoria.h"

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double valor, resultado;
    int tipoUnidade, unidadeOrigem, unidadeDestino;

    do
    {
        printf("Escolha uma das convers�es:\n"
               "1 - Unidades de Comprimento\n"
               "2 - Unidades de Massa\n"
               "3 - Unidades de Volume\n"
               "4 - Unidades de Temperatura\n"
               "5 - Unidades de Velocidade\n"
               "6 - Unidades de Energia\n"
               "7 - Unidades de �rea\n"
               "8 - Unidades de Tempo\n"
               "9 - Unidades de Mem�ria\n"
               "0 - Para sair!\n");

        scanf("%d", &tipoUnidade);

        switch (tipoUnidade){
        case 1: // Unidades de Comprimento

            printf("Digite a unidade de origem (1. metro, 2. cent�metro, 3. mil�metro):\n");
            scanf("%d", &unidadeOrigem);

            printf("Digite a unidade de destino (1. metro, 2. cent�metro, 3. mil�metro):\n");
            scanf("%d", &unidadeDestino);

            printf("Digite o valor a ser convertido:\n");
            scanf("%lf", &valor);

            resultado = comprimento(unidadeOrigem, unidadeDestino, valor);

            if (resultado >= 0){
                if ((unidadeOrigem == 1 && unidadeDestino == 2) || (unidadeOrigem == 2 && unidadeDestino == 3)){
                    printf("O resultado da convers�o �: %.3lf\n", resultado);
                }
                else{
                    printf("O resultado da convers�o �: %.3lf\n", resultado);
                }
            }
                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;

            case 2: // Unidades de Massa
                printf("\nDigite o n�mero da unidade de origem (1. quilograma, 2. grama, 3. tonelada):\n");
                scanf("%d", &unidadeOrigem);

                printf("Digite o n�mero da unidade de destino (1. quilograma, 2. grama, 3. tonelada):\n");
                scanf("%d", &unidadeDestino);

                printf("Digite o valor a ser convertido:\n");
                scanf("%lf", &valor);

                resultado = massa(unidadeOrigem, unidadeDestino, valor);

                if (resultado >= 0){
                if ((unidadeOrigem == 1 && unidadeDestino == 3) || (unidadeOrigem == 2 && unidadeDestino == 1)) {
                    printf("O resultado da convers�o �: %.4lf\n", resultado);
                }else if((unidadeOrigem == 1 && unidadeDestino == 2) || (unidadeOrigem == 3 && unidadeDestino == 1) || (unidadeOrigem == 3 && unidadeDestino == 2)) {
                    printf("O resultado da convers�o �: %.2lf\n", resultado);
                }else{
                    printf("O resultado da convers�o �: %.6lf\n", resultado);
                }
            }
                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;

            case 9:
                
                printf("Digite a unidade de origem \n1.Bits\n2.Bytes\n3.KB\n4.MB\n5.GB\n6.TB\n");
                scanf("%d", &unidadeOrigem);

                printf("Digite a unidade de destino \n1.Bits\n2.Bytes\n3.KB\n4.MB\n5.GB\n6.TB\n");
                scanf("%d", &unidadeDestino);

                if (unidadeOrigem == unidadeDestino)
                {
                    printf("Conversão invalida! Você nao pode escolher a mesma unidade para a origem e destino!\n");
                    return -1;
                }

                printf("Digite o valor a ser convertido:\n");
                scanf("%lf", &valor);

                resultado = memoria(unidadeOrigem, unidadeDestino, valor);

                printf("Resultado da conversao: %.4lf\n", resultado);

                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;

            case 0: // Sair do programa
                printf("\nEncerrando o programa.\n");
                break;

            default:
                printf("Convers�o inv�lida");
                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;
            }
    }while (tipoUnidade != 0);
    return 0;
}