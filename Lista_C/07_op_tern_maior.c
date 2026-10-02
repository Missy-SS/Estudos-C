//Exercício 7

#include <stdio.h>

int main () {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);
    num1 > num2 ? printf("%d é maior que %d", num1, num2) : printf("%d é menor que %d", num1, num2);
    return 0;
}
