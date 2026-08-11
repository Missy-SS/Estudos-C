#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5

//define são diretivas que nos ajudam a
//definir constantes, que nunca mudam.

int main(void) {
    printf("****************************\n");
    printf("    Jogo de Adivinhação\n");
    printf("****************************\n");

    int numerosecreto = 42;

    int chute;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {

        printf("Tentativa %d de 5\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        int acertou = (chute == numerosecreto);

        //%d permite que o local em que está seja substituido por uma variável


        // i = 1
        //O código deve ser repitido enquanto i for menor/igual que 3 (i<=3)
        // i ++ informa de quanto em quanto o i cresce

        if (acertou) {

            printf("Parabéns! Você acertou!\n");
            printf("Jogue novamente, você é um bom jogador!\n");
            break;
        }
        else {
            int maior = chute > numerosecreto;
            if (maior) {
                printf("Seu chute foi maior que o número secreto!\n");

                printf("%d\n", maior);
            }
            else {
                printf("Seu chute foi menor que o número secreto!\n");
            }
        }
    }
    printf("Fim do jogo!\n");
}
//"Escopo" é o nome dado aos trechos do código, situados entre as chaves ({}),
//onde determinada variável é válida após ser declarada.


// if() sozinho — executará o bloco de código somente se a condição for verdadeira;
// else if() — executará o primeiro bloco de código se a condição for verdadeira, ou o segundo bloco,
// se a primeira for falsa;
// if-elseif-else — procura a condição verdadeira para executar, ignorando as demais ou, se todas são falsas,
// executa o último bloco de código else.
