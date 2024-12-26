#include <stdio.h>

void celsiusParaFahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f °C = %.2f °F\n", celsius, fahrenheit);
}

void celsiusParaKelvin(float celsius) {
    float kelvin = celsius + 273.15;
    printf("%.2f °C = %.2f K\n", celsius, kelvin);
}

void fahrenheitParaCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5/9;
    printf("%.2f °F = %.2f °C\n", fahrenheit, celsius);
}

void fahrenheitParaKelvin(float fahrenheit) {
    float kelvin = (fahrenheit - 32) * 5/9 + 273.15;
    printf("%.2f °F = %.2f K\n", fahrenheit, kelvin);
}

void kelvinParaCelsius(float kelvin) {
    float celsius = kelvin - 273.15;
    printf("%.2f K = %.2f °C\n", kelvin, celsius);
}

void kelvinParaFahrenheit(float kelvin) {
    float fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    printf("%.2f K = %.2f °F\n", kelvin, fahrenheit);
}

int main() {
    int escolha;
    float temperatura;

    printf("Escolha a conversão:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Fahrenheit para Kelvin\n");
    printf("5. Kelvin para Celsius\n");
    printf("6. Kelvin para Fahrenheit\n");
    printf("Digite sua escolha (1-6): ");
    scanf("%d", &escolha);

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    switch (escolha) {
        case 1:
            celsiusParaFahrenheit(temperatura);
            break;
        case 2:
            celsiusParaKelvin(temperatura);
            break;
        case 3:
            fahrenheitParaCelsius(temperatura);
            break;
        case 4:
            fahrenheitParaKelvin(temperatura);
            break;
        case 5:
            kelvinParaCelsius(temperatura);
            break;
        case 6:
            kelvinParaFahrenheit(temperatura);
            break;
        default:
            printf("Escolha inválida!\n");
            break;
    }

    return 0;
}

