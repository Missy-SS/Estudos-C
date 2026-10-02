//Exercício 21

#include <stdio.h>

int fat(int numero) {
    int resultado = 1;
    if (numero > 0) {
        for (int i = 2; i <= numero; i++) {
            resultado *= i;
        }
        return resultado;
    }

}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("Fatorial de %d = %d", numero, fat(numero));
    } else if (numero < 0) {
        return printf("Não existe fatorial para números negativos");
    } else {
        printf("O fatorial de 0 = 1");
    }

    return 0;
}
