#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    double valor;
    int tipoUnidade;
    char unidadeOrigem, unidadeDestino;
    
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

    switch (tipoUnidade)
    {
    case 1: // Unidades de Comprimento
        
        printf("Digite a unidade de origem (metro, cent�metro, mil�metro):\n");
        scanf("%s", &unidadeOrigem);

        printf("Digite a unidade de destino (metro, cent�metro, mil�metro):\n");
        scanf("%s", &unidadeDestino);

        printf("Digite o valor a ser convertido:\n");
        scanf("%lf", &valor);

        break;
    
    default:
        printf("Convers�o inv�lida");
        break;
    }

    return 0;
}
