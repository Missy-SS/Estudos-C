#include <stdio.h>

int main() {
    float imc, peso, altura;
    printf("\nDigite peso (em kg) e altura (em metros): ");
    scanf("%f %f", &peso, &altura);
    imc = peso / (altura * altura);
    printf("\n IMC: %.2f", imc);
    return 0;
}
