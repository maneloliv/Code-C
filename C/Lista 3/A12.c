#include<stdio.h>
typedef struct sApartamentos{
    char nome[15];
    int numeroap;
    float area;
    int moradores;
    float aluguel;
}Ape;
void area(Ape *ap){
    float areatotal=0.0;
    for(int i=0;i<15;i++){
        areatotal+=ap[i].area;
    }
    printf("A area total e: %f", areatotal);
}
void arrecadacao(Ape *ap){
    float totalaluguel=0.0;
    for(int i=0;i<15;i++){
        totalaluguel+=ap[i].aluguel;
    }
    printf("O total de Arrecadacao com o Aluguel é: %f", totalaluguel);
}
void maismoradores(Ape *ap){
    int maior=-1,maiori=0;
    for(int i=0;i<15;i++){
        if(maior > ap[i].moradores){
            maior=ap[i].moradores;
            maiori=i;
        }
    }
    printf("O %s responsavel pelo apartamento %d e quem tem mais moradores, com %d!", ap[maiori].nome,ap[maiori].numeroap, ap[maiori].moradores);
}
int main(){
    Ape ap[15];
    int i;
    for(i=0;i<15;i++){
        printf("Digite o nome do Responsavel: ");
        gets(ap[i].nome);
        fflush(stdin);
        printf("Digite o numero do Apartamento: ");
        scanf("%d", &ap[i].numeroap);
        fflush(stdin);
        printf("Digite a area do seu Aparatamento(m²)");
        scanf("%f", &ap[i].area);
        fflush(stdin);
        printf("Digite a quantidade de pessoas que moram no Apartamento");
        scanf("%d",&ap[i].moradores);
        fflush(stdin);
        printf("Digite o valor do Aluguel: ");
        scanf("%f", &ap[i].aluguel);
        fflush(stdin);
    }
    area(ap);
    arrecadacao(ap);
    maismoradores(ap);
return 0;
}