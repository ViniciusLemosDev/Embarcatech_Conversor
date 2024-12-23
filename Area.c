#include <stdio.h>

// funções para a conversão
// 1 m² = 10000 cm²

float metros_para_cm(float metros)
{
    return metros * 10000;
}
float centimetros_para_m(float centimetros)
{
    return centimetros / 10000;
}

int main()
{
    int resp;
    float valor, resultado;

    // Menu
    printf("Conversão de Unidades de Área (Metro Quadrado e Centimetro Quadrado)\n");
    printf("1. Metros quadrados (m²) para Centímetros quadrados (cm²)\n");
    printf("2. Centímetros quadrados (cm²) para Metros quadrados (m²)\n");
    printf("Escolha a opção (1-2): ");
    scanf("%d", &resp);

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    // Conversão
    switch (resp)
    {
    case 1:
        resultado = metros_para_cm(valor);
        printf("%.2f m² = %.2f cm²\n", valor, resultado);
        break;
    case 2:
        resultado = centimetros_para_m(valor);
        printf("%.2f cm² = %.6f m²\n", valor, resultado);
        break;
    default:
        printf("Opção inválida!\n");
    }

    return 0;
}