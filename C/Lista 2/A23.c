#include <stdio.h>

void categoria(int a) {
    if (a < 0) {
        printf("Idade inválida");
    } else if (a < 7) {
        printf("Infantil A");
    } else if (a < 10) {
        printf("Infantil B");
    } else if (a < 13) {
        printf("Juvenil A");
    } else if (a < 17) {
        printf("Juvenil B");
    } else {
        printf("Adulto");
    }
}

int main() {
    int a;

    printf("Digite a idade: ");
    scanf("%d", &a);
    categoria(a);

    return 0;
}
