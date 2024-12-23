#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double valor, resultado;
    int tipoUnidade;
    char unidadeOrigem[20], unidadeDestino[20];

    printf("Escolha uma das conversões:\n"
           "1 - Unidades de Comprimento\n"
           "2 - Unidades de Massa\n"
           "3 - Unidades de Volume\n"
           "4 - Unidades de Temperatura\n"
           "5 - Unidades de Velocidade\n"
           "6 - Unidades de Energia\n"
           "7 - Unidades de Área\n"
           "8 - Unidades de Tempo\n"
           "9 - Unidades de Memória\n");
    scanf("%d", &tipoUnidade);
    getchar(); // Limpa o caractere de nova linha pendente no buffer

    switch (tipoUnidade)
    {

    case 3: // Unidades de Volume
        printf("Digite a unidade de origem (litro, mililitro, metro cúbico):\n");
        fgets(unidadeOrigem, 20, stdin);
        unidadeOrigem[strcspn(unidadeOrigem, "\n")] = '\0';
        printf("Digite a unidade de destino (litro, mililitro, metro cúbico):\n");
        fgets(unidadeDestino, 20, stdin);
        unidadeDestino[strcspn(unidadeDestino, "\n")] = '\0';
        printf("Digite o valor a ser convertido:\n");
        scanf("%lf", &valor);

        if (strcmp(unidadeOrigem, "litro") == 0)
        {
            if (strcmp(unidadeDestino, "mililitro") == 0)
                resultado = valor * 1000;
            else if (strcmp(unidadeDestino, "metro cúbico") == 0)
                resultado = valor / 1000;
            else
                resultado = valor;
        }
        else if (strcmp(unidadeOrigem, "mililitro") == 0)
        {
            if (strcmp(unidadeDestino, "litro") == 0)
                resultado = valor / 1000;
            else if (strcmp(unidadeDestino, "metro cúbico") == 0)
                resultado = valor / 1e6;
            else
                resultado = valor;
        }
        else if (strcmp(unidadeOrigem, "metro cúbico") == 0)
        {
            if (strcmp(unidadeDestino, "litro") == 0)
                resultado = valor * 1000;
            else if (strcmp(unidadeDestino, "mililitro") == 0)
                resultado = valor * 1e6;
            else
                resultado = valor;
        }
        else
        {
            printf("Unidade de origem inválida.\n");
            return 1;
        }

        printf("Resultado: %.2lf %s\n", resultado, unidadeDestino);
        break;

    default:
        printf("Conversão inválida\n");
        break;
    }

    return 0;
}
