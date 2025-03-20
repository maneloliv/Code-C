#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, n, s=0,m;
    int *vet;

    printf("Digite a quantidade: ");
    scanf("%d", &n);
    vet = (int*) malloc(n * sizeof(int));
    for (i = 0; i < n; i++){
        printf("Digite o conteudo da posicao %d: ", i);
        scanf("%d", &vet[i]);
        s+=vet[i];
    }
    m=s/n;
    printf("A media Aritimetica e: %d", m);
free(vet);
return 0;
}