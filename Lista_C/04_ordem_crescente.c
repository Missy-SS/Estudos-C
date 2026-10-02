//Exercício 4

#include <stdio.h>

int main () {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2)
        printf("Número iguais.");
    else if (num1 < num2)
        printf("Ordem crescente: %d %d", num1, num2);
    else
        printf("Ordem crescente: %d %d", num2, num1);

    return 0;
}
