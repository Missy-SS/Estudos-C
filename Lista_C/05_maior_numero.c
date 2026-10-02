//Exercício 5

#include <stdio.h>

int main () {
    int num1, num2, num3;
    printf("Informe três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num3 < num1 && num1 > num2)
        printf("%d é o maior número", num1);
    else if (num1 < num2 && num2 > num3)
        printf("%d é o maior número", num2);
    else if (num2 < num3 && num3 > num1)
        printf("%d é o maior número", num3);
    else
        printf("Nenhum número é maior que todos os outros");
    return 0;
}
