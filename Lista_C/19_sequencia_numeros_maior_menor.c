//Exercício 19

#include <stdio.h>

    int main () {
        int n, sequencia_numeros, maior = 1, menor = 1;

        printf("Digite a quantidade de números da sequência: ");
        scanf("%d", &n);

        while (n <= 0){
            printf("valor inválido. \n Digite um valor positivo.");
            scanf("%d", &n);
        }
        for (int i = 0; i <= n - 1; i++) {
            printf("Insira um valor: ");
            scanf("%d", &sequencia_numeros);


            if (sequencia_numeros > maior)
                maior = sequencia_numeros;
            if (sequencia_numeros < menor)
                menor = sequencia_numeros;
        }
        printf("O maior numero é: %d\n", maior);
        printf("O menor numero é: %d\n", menor);

        return 0;
    }
