#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double valor;
    int tipoUnidade;
    char unidadeOrigem, unidadeDestino;
    
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

    switch (tipoUnidade)
    {
    case 1: // Unidades de Comprimento
        
        printf("Digite a unidade de origem (metro, centímetro, milímetro):\n");
        scanf("%s", &unidadeOrigem);

        printf("Digite a unidade de destino (metro, centímetro, milímetro):\n");
        scanf("%s", &unidadeDestino);

        printf("Digite o valor a ser convertido:\n");
        scanf("%lf", &valor);

        break;
    
    default:
        printf("Conversão inválida");
        break;
    }

    return 0;
}
