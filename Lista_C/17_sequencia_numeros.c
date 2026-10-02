//Exercício 17


#include <stdio.h>

int main () {
    int n, sequencia_numeros, soma = 0;

    printf("Digite a quantidade de números da sequência: ");
    scanf("%d", &n);

    while (n <= 0){
        printf("valor inválido. \n Digite um valor positivo.");
        scanf("%d", &n);
    }

    for (int i = 0; i <= n - 1; i++) {
        printf("Insira um valor: ");
        scanf("%d", &sequencia_numeros);
        if (sequencia_numeros != 0) {
            soma = sequencia_numeros + soma;
            printf("Soma atual = %d\n", soma);
        }
    }

    return 0;
}
