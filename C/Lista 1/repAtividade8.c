#include <stdio.h>
int main(){
    int n,i, idade;
    float peso=0,s=0;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("Digite a idade da pessoa %d: ",i);
        scanf("%d", &idade);
        if(idade>30){
            printf("Digite o Peso da pessoa %d: ",i);
            scanf("%f", &peso);
            s=s+peso;
        }
    }
    printf("A soma dos pesos é: %f", peso);
    return 0;
}