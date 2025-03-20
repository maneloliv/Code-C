#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n, i;
    int *vet;
    printf("Digite a quantidade: ");
    scanf("%d", &n);
    vet = (int*) malloc (n * sizeof(int*));
    for (i = 0; i < n; i++){
        printf("Digite o conteudo da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Conteudo do vetor:\n");
    for (i = 0; i < n; i++){
        printf("%d ",vet[i]);
    }
    free(vet);
    return 0;
}