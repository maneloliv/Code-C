#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int i, n, j, t=0;
    int *vet1;
    int *vet2;
    int *vet3;
    printf("Digite a quantidade; ");
    scanf("%d", &n);

    vet1 = (int*) malloc(n* sizeof(int));
    vet2 = (int*) malloc(n* sizeof(int));
    j=n*2;
    vet3 = (int*) malloc(j* sizeof(int));

    for(i=0;i<n;i++){
        printf("Digite o Valor da posicao %d do vetor 1: ",i);
        scanf("%d", &vet1[i]);
        printf("Digite o Valor da posicao %d do vetor 2: ",i);
        scanf("%d", &vet2[i]);
    }
    for(i=0; i<n;i++){
        vet3[t]= vet1[i];
        vet3[t+1]= vet2[i];
        t+=2;
    }
    printf("Conteudo do vetor:\n");
    for (i = 0; i<j; i++){
        printf("%d ",vet3[i]);
    }

free(vet2);    
free(vet1);
free(vet3);
return 0;
}