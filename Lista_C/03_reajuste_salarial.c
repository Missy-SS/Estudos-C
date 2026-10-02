//Exercício 3

#include <stdio.h>

int main() {
    float salario, total_salarial;
    printf("Informe seu salário: ");
    scanf("%f", &salario);
    total_salarial = salario + (0.05 * salario);
    if (salario <= 750.00)
        total_salarial = 100 + total_salarial;
    else
        total_salarial = salario + (0.05 * salario);

    printf("O reajuste salarial, aumentou o salário para %.2f: ", total_salarial);

    return 0;

}
