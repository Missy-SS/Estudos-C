#include <stdio.h>

int main() {
    float f, c;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("\nTemperatura em Celsius: %.2f", c);
    return 0;

}
