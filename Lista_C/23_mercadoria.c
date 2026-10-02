//Exercício 23

#include <stdio.h>

float entrada_dados() {
    double totalCompra, valores_mercadorias;
    do {
        printf("Insira os valores das mercadorias: ");
        scanf("%lf", &valores_mercadorias);
        totalCompra += valores_mercadorias;
    } while (valores_mercadorias != 0);

    printf("Total das mercadorias: %.2f\n", totalCompra);;
    return totalCompra;;
}

float total_compra(double totalCompra) {
    double desconto, valorFinal;
    if (totalCompra < 50)
        desconto = 0.05;
    else if (totalCompra < 100)
        desconto = 0.10;
    else if (totalCompra < 200)
        desconto = 0.15;
    else
        desconto = 0.20;

    valorFinal = totalCompra - (totalCompra * desconto);

    printf("Valor final da compra: %.2f\n", valorFinal);
    return 0;
}

int main () {
    double valores_mercadorias, totalCompra ;
    totalCompra = entrada_dados();

    total_compra(totalCompra);

    return 0;
}
