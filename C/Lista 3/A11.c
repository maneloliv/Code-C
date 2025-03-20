#include <stdio.h>
#include<string.h>

typedef struct sEstoque{
    char nome[15];
    char setor[15];
    int quantidade;
    float preco;
}Estoque;
void sessao(Estoque *e){
int diferentes[10]={0,0,0,0,0,0,0,0,0,0};
int i;
int j;
    for(j=0; j<10;j++){
        for(i=0;i<10;i++){
            if (strcmp(e[j].setor, e[i].setor) == 0) {
                if (strcmp(e[j].nome, e[i].nome) != 0) {
                diferentes[j]+=2;
                }
            }
        }
     printf("No setor %s quantidade de produtos diferentes:%d\n",e[j].setor, diferentes[j]);
    }
}
float invest(Estoque *e){
    int i; 
    float investimento=0.0;
    for(i=0;i<10;i++){
        investimento+= e[i].quantidade * e[i].preco;
    }
return investimento;
}
int main()
{
Estoque e[10];
for(int i=0; i<10;i++){
    printf("Digite o nome do produto\n");
    gets(e[i].nome);
    fflush(stdin);
    printf("Digite o setor do produto\n");
    gets(e[i].setor);
    fflush(stdin);
     printf("Digite a quantidade do produto\n");
    scanf("%d",&e[i].quantidade);
    fflush(stdin);
     printf("Digite o preco do produto\n");
    scanf("%f",&e[i].preco);
    fflush(stdin);
}
sessao(e);
printf("O investimento foi de %.2f",invest(e));
return 0;
}