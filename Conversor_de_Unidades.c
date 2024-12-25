#include <stdio.h>
#include <locale.h>
#include "volume.h"
#include "volume.c"
#include "massa.c"
#include "massa.h"
#include "Memoria.h"
#include "comprimento.h"
#include "velocidade.c"

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double valor, resultado;
    int tipoUnidade, unidadeOrigem, unidadeDestino;

    do
    {
        printf("Escolha uma das conversões:\n"
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

        switch (tipoUnidade){
            case 1: // Unidades de Comprimento

            printf("Digite a unidade de origem (1. metro, 2. centímetro, 3. milímetro):\n");
            scanf("%d", &unidadeOrigem);

            printf("Digite a unidade de destino (1. metro, 2. centímetro, 3. milímetro):\n");
            scanf("%d", &unidadeDestino);

            printf("Digite o valor a ser convertido:\n");
            scanf("%lf", &valor);

            resultado = comprimento(unidadeOrigem, unidadeDestino, valor);

            if (resultado >= 0){
                if ((unidadeOrigem == 1 && unidadeDestino == 2) || (unidadeOrigem == 2 && unidadeDestino == 3)){
                    printf("O resultado da conversão é: %.3lf\n", resultado);
                }
                else{
                    printf("O resultado da conversão é: %.3lf\n", resultado);
                }
            }
                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;

            case 2: // Unidades de Massa

                printf("\nDigite o número da unidade de origem (1. quilograma, 2. grama, 3. tonelada):\n");
                scanf("%d", &unidadeOrigem);

                printf("Digite o número da unidade de destino (1. quilograma, 2. grama, 3. tonelada):\n");
                scanf("%d", &unidadeDestino);

                printf("Digite o valor a ser convertido:\n");
                scanf("%lf", &valor);

                resultado = massa(unidadeOrigem, unidadeDestino, valor);

                if (resultado >= 0){
                if ((unidadeOrigem == 1 && unidadeDestino == 3) || (unidadeOrigem == 2 && unidadeDestino == 1)) {
                    printf("O resultado da conversão é: %.4lf\n", resultado);
                }else if((unidadeOrigem == 1 && unidadeDestino == 2) || (unidadeOrigem == 3 && unidadeDestino == 1) || (unidadeOrigem == 3 && unidadeDestino == 2)) {
                    printf("O resultado da conversão é: %.2lf\n", resultado);
                }else{
                    printf("O resultado da conversão é: %.6lf\n", resultado);
                }
            }
                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;


            case 3: // Unidades de Volume
                printf("Digite a unidade de origem (1. litro, 2. mililitro, 3. metro c�bico):\n");
                scanf("%d", &unidadeOrigem);

                printf("Digite a unidade de destino (1. litro, 2. mililitro, 3. metro c�bico):\n");
                scanf("%d", &unidadeDestino);

                printf("Digite o valor a ser convertido:\n");
                scanf("%lf", &valor);

                resultado = Volume(unidadeOrigem, unidadeDestino, valor);

                if (resultado >= 0) {
                    if ((unidadeOrigem == 1 && unidadeDestino == 3) || (unidadeOrigem == 2 && unidadeDestino == 1)) {
                printf("O resultado da convers�o �: %.4lf\n", resultado);
                } else if ((unidadeOrigem == 1 && unidadeDestino == 2) || 
                   (unidadeOrigem == 3 && unidadeDestino == 1) || 
                   (unidadeOrigem == 3 && unidadeDestino == 2)) {
                printf("O resultado da conversão é: %.2lf\n", resultado);
                } else {
                printf("O resultado da conversão é: %.6lf\n", resultado);
                }
             }

                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n'); // Limpa buffer
                getchar(); // Aguarda Enter
                break;
            
            case 5:
                printf("\nDigite o número da unidade de origem (0. km/h, 1. m/s, 2. mph):\n");
                scanf("%d", &unidadeOrigem);

                printf("Digite o número da unidade de destino (0. km/h, 1. m/s, 2. mph):\n");
                scanf("%d", &unidadeDestino);

                printf("Digite o valor a ser convertido:\n");
                scanf("%lf", &valor);

                resultado = converterVelocidade(valor, unidadeOrigem, unidadeDestino);
                printf("O resultado da conversao e: %.3lf\n", resultado);

                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;

            case 9:  // Unidades de mem�ria
                
                printf("Digite a unidade de origem \n1.Bits\n2.Bytes\n3.KB\n4.MB\n5.GB\n6.TB\n");
                scanf("%d", &unidadeOrigem);

                printf("Digite a unidade de destino \n1.Bits\n2.Bytes\n3.KB\n4.MB\n5.GB\n6.TB\n");
                scanf("%d", &unidadeDestino);

                if (unidadeOrigem == unidadeDestino)
                {
                    printf("Convers�o inv�lida! Voc� n�o pode escolher a mesma unidade para a origem e destino!\n");
                    return -1;
                }

                printf("Digite o valor a ser convertido:\n");
                scanf("%lf", &valor);

                resultado = memoria(unidadeOrigem, unidadeDestino, valor);

                printf("Resultado da conversão: %.4lf\n", resultado);

                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;

            case 0: // Sair do programa
                printf("\nEncerrando o programa.\n");
                break;

            default:

                printf("Conversão inválida");

                printf("Pressione Enter para continuar...\n");
                while (getchar() != '\n');      // Limpa buffer
                getchar(); // Aguarda Enter
                break;
            }
    }while (tipoUnidade != 0);
    return 0;
}
