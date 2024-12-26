#include <stdio.h>

float segundosParaMinutos(float segundos) {
    return segundos / 60;
}

float minutosParaSegundos(float minutos) {
    return minutos * 60;
}

float minutosParaHoras(float minutos) {
    return minutos / 60;
}

float horasParaMinutos(float horas) {
    return horas * 60;
}

int main() {
    int opcao;
    float valor, resultado;

    printf("=== Conversor de Unidades de Tempo ===\n");
    printf("Escolha uma conversão:\n");
    printf("1 - Segundos para Minutos\n");
    printf("2 - Minutos para Segundos\n");
    printf("3 - Minutos para Horas\n");
    printf("4 - Horas para Minutos\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o valor em Segundos: ");
            scanf("%f", &valor);
            resultado = segundosParaMinutos(valor);
            printf("%.2f segundos equivale a %.2f minutos\n", valor, resultado);
            break;
        case 2:
            printf("Digite o valor em Minutos: ");
            scanf("%f", &valor);
            resultado = minutosParaSegundos(valor);
            printf("%.2f minutos equivale a %.2f segundos\n", valor, resultado);
            break;
        case 3:
            printf("Digite o valor em Minutos: ");
            scanf("%f", &valor);
            resultado = minutosParaHoras(valor);
            printf("%.2f minutos equivale a %.2f horas\n", valor, resultado);
            break;
        case 4:
            printf("Digite o valor em Horas: ");
            scanf("%f", &valor);
            resultado = horasParaMinutos(valor);
            printf("%.2f horas equivale a %.2f minutos\n", valor, resultado);
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
