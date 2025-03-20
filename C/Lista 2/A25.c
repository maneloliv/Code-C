#include <stdio.h>
void ordenar(int* a, int* b, int* c) {
    int x;

    if (*a > *b) {
        x = *a;
        *a = *b;
        *b = x;
    }

    if (*b > *c) {
        x = *b;
        *b = *c;
        *c = x;

        if (*a > *b) {
            x = *a;
            *a = *b;
            *b = x;
        }
    }
}

int main() {
    int a, b, c;

    printf("Digite os valores: ");
    scanf("%d %d %d", &a, &b, &c);
    

    ordenar(&a, &b, &c);

    printf("Valores ordenados em ordem crescente: %d, %d, %d\n", a, b, c);

    return 0;
}
