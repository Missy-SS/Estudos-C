#include <stdio.h>
#define PI 3.1415

int main () {
    float raio, area, perimetro;
    printf("Digite o raio: ");
    scanf("%f", &raio);
    area = PI * (raio * raio);
    printf("\n %f", area);
    perimetro = (2 * PI * raio);
    printf("\n %f", perimetro);
    return 0;
}
