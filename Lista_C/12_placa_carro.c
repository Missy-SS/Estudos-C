//Exercício 12

#include <stdio.h>

int main () {
    int placa_carro, digito;
    printf("Digite os 4 dígitos da placa do carro: ");
    scanf("%d", &placa_carro);
    while (placa_carro < 0 || placa_carro > 9999) {
        printf("Quantidade de dígitos inválida!\n Digite novamente!\n");
        scanf("%d", &placa_carro);
    }

    digito = placa_carro % 10;

    switch(digito) {
        case 1:
        case 2:
            printf("Seu rodízio é na segunda-feira"); break;
        case 3:
        case 4:
            printf("Seu rodízio é na terça-feira"); break;
        case 5:
        case 6:
            printf("Seu rodízio é na quarta-feira"); break;
        case 7:
        case 8:
            printf("Seu rodízio é na quinta-feira"); break;
        case 9:
        case 0:
            printf("Seu rodízio é na sexta-feira"); break;
        default: printf("Digite um número válido");
    }
    return 0;
}
