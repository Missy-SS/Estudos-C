//Exercício 22

#include <stdio.h>

int valor_soma (int n, double x){
    double soma = 1, termo = 1;
    // x = soma + x;
    for (int i = 1; i <= n; i++) {
        termo = termo * x;
        soma += termo;
    }

    printf("O valor da soma é: %.2lf\n", soma);
    return 0;
}

int main () {
    int n;
    double x, resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);
    while (n < 0) {
        printf("Valor inváliado.\n Digite novamente.\n");
        scanf("%d", &n);
    }

    printf("Digite um valor para x: ");
    scanf("%lf", &x);

    resultado = valor_soma(n, x);

    return 0;
}
