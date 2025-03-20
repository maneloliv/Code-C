#include<stdio.h>
int soma (int *vet, int i, int n){
    if(i==n){
        return 0;
    }else{
        return(vet[i]+soma(vet, i+1, n));
    }

}
int main(){
    int *vet, n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int*) malloc (n*sizeof(int));

    for(int i=0; i<n; i++){
        printf("Valor posicao %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("A soma e: %d", soma(vet, 0 ,n));
    free(vet);

    return 0;
}