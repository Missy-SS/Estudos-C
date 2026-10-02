//Exercício 18

#include <stdio.h>
#include <stdlib.h>


int main () {
        int n, sequencia_numeros, soma = 0;
        double media;

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

        media = (double)soma / n;
        printf("Media = %.1lf\n", media);

    return 0;
}
