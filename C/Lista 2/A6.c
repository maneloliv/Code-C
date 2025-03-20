#include <stdio.h>
int main()
{
    char respostas[5][10], gabarito[10];
    int i,j,cont[5]={0,0};
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("Digite a resposta da questao %d (aluno %d)\n",j+1,i+1);
            scanf(" %c",&respostas[i][j]);
            fflush(stdin);
        }
    }
    for(i=0;i<4;i++){
        printf("digite o gabarito da questao %d ",i);
        scanf(" %c",&gabarito[i]);
        fflush(stdin);
    }
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            if(respostas[i][j]== gabarito[i]){
                cont[i]++;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("A nota do aluno %d eh: %d",i,cont[i]);
    }
return 0;
}