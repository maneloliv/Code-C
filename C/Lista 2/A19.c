#include <stdio.h>
#include <string.h>
#define MAX_CARROS 5
#define TAM_MARCA 16
struct Carro {
    char marca[TAM_MARCA];
    int ano;
    float preco;
};
int main() {
    struct Carro carros[MAX_CARROS];
    int i;
    float valor;
    for (i = 0; i < MAX_CARROS; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Marca: ");
        fgets(carros[i].marca, TAM_MARCA, stdin);
        carros[i].marca[strcspn(carros[i].marca, "\n")] = '\0';  // Remover a quebra de linha
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Preco: ");
        scanf("%f", &carros[i].preco);
        getchar();  // Consumir o caractere '\n' pendente
    }
    do {
        printf("\nDigite um valor de preco (0 para sair): ");
        scanf("%f", &valor);
        if (valor == 0) {
            break;
        }
        printf("\nCarros com preco menor que %.2f:\n", valor);
        for (i = 0; i < MAX_CARROS; i++) {
            if (carros[i].preco < valor) {
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %.2f\n", carros[i].preco);
                printf("---------------------------\n");
            }
        }
    } while (valor != 0);
    return 0;
}
