//Exercício 20

#include <stdio.h>

int funcao_potencia(int expoente_n, double base_x) {
    double resultado = 1;
    while (expoente_n < 0) {
        printf("O número precisa ser maior ou igual a zero.\n");
        printf("Digite um número novamente: ");
        scanf("%d", &expoente_n);
    }
    for (int i = 0; i < expoente_n; i++) {
        resultado *= base_x;
    }
    printf("%.1f elevado a %d = %.1f\n", base_x, expoente_n, resultado);
    return 0;
}

int main () {
    double base_x;
    int expoente_n;
    printf("Digite o expoente: ");
    scanf("%d", &expoente_n);
    printf("Digite a base: ");
    scanf("%lf", &base_x);

    funcao_potencia(expoente_n, base_x);

    return 0;


}
