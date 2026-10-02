//Exercício 2

#include <stdio.h>

int main() {
    int numero_lados, numero_diagonais;
    printf("Digite a quantidade de lados do polígono: ");
    scanf("%d", &numero_lados);
    if (numero_lados >= 3) {
        numero_diagonais = (numero_lados * (numero_lados - 3) / 2);
        printf("O número de diagonais do polígono é: %d", numero_diagonais);
    } else {
        do {
            printf("Número de lados inválidos.\n Digite novamente.\n");
            numero_lados = scanf("%d", &numero_lados);
        } while (numero_lados < 3);
    }

    return 0;
}
