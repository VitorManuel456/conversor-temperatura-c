#include <stdio.h>

float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);
float celsiusParaKelvin(float c);
float kelvinParaCelsius(float k);

int main() {

    int opcao;
    float temperatura;
    float resultado;

    do {

        printf("\n=================================\n");
        printf(" Conversor de Temperatura em C\n");
        printf("=================================\n");
        printf("1 - Celsius -> Fahrenheit\n");
        printf("2 - Fahrenheit -> Celsius\n");
        printf("3 - Celsius -> Kelvin\n");
        printf("4 - Kelvin -> Celsius\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {

            case 1:

                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);

                resultado = celsiusParaFahrenheit(temperatura);

                printf("Resultado: %.2f °F\n", resultado);

                break;

            case 2:

                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);

                resultado = fahrenheitParaCelsius(temperatura);

                printf("Resultado: %.2f °C\n", resultado);

                break;

            case 3:

                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);

                resultado = celsiusParaKelvin(temperatura);

                printf("Resultado: %.2f K\n", resultado);

                break;

            case 4:

                printf("Digite a temperatura em Kelvin: ");
                scanf("%f", &temperatura);

                if (temperatura < 0) {

                    printf("\nErro: temperaturas em Kelvin nao podem ser negativas.\n");
                    break;

                }

                resultado = kelvinParaCelsius(temperatura);

                printf("Resultado: %.2f °C\n", resultado);

                break;

            case 0:

                printf("\nObrigado por utilizar o programa!\n");

                break;

            default:

                printf("\nOpcao invalida! Escolha uma opcao entre 0 e 4.\n");

        }

    } while(opcao != 0);

    return 0;
}

float celsiusParaFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

float fahrenheitParaCelsius(float f) {
    return (f - 32) * 5 / 9;
}

float celsiusParaKelvin(float c) {
    return c + 273.15;
}

float kelvinParaCelsius(float k) {
    return k - 273.15;
}
