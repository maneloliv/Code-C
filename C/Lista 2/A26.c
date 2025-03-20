#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float calcularDistancia(struct Ponto p1, struct Ponto p2) {
    float distancia;

    distancia = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

    return distancia;
}

int main() {
    struct Ponto ponto1, ponto2;

    printf("Digite as coordenadas do primeiro ponto:\n");
    printf("x: ");
    scanf("%f", &ponto1.x);
    printf("y: ");
    scanf("%f", &ponto1.y);

    printf("Digite as coordenadas do segundo ponto:\n");
    printf("x: ");
    scanf("%f", &ponto2.x);
    printf("y: ");
    scanf("%f", &ponto2.y);

    float distancia = calcularDistancia(ponto1, ponto2);

    printf("Distância euclidiana entre os pontos: %.2f\n", distancia);

    return 0;
}
