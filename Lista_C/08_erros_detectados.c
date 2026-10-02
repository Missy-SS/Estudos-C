//Exercício 8

#include <stdio.h>

int main () {
    int e;
    printf("Quantos erros foram detectados? ");
    scanf("%d", &e);
    (e == 1) ? printf("%d erro detectado!", e) : printf("%d erros detectados!", e);

}
