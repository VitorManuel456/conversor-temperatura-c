#include <stdio.h>

float celsiusParaFahrenheit(float c);
float fahrenheitParaCelsius(float f);
float celsiusParaKelvin(float c);
float kelvinParaCelsius(float k);

int main() {

    int opcao;

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
            case 2:
            case 3:
            case 4:
                printf("\nFuncionalidade em desenvolvimento...\n");
                break;

            case 0:
                printf("\nEncerrando programa...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");

        }

    } while(opcao != 0);

    return 0;

}

/* Implementação futura */

float celsiusParaFahrenheit(float c) {
    return 0;
}

float fahrenheitParaCelsius(float f) {
    return 0;
}

float celsiusParaKelvin(float c) {
    return 0;
}

float kelvinParaCelsius(float k) {
    return 0;
}
