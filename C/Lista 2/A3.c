#include <stdio.h>
int main()
{
    int aluno[5], i, a1, a2;
    float altura[5], maior=0, menor=9999;
    for(i=0;i<5;i++){
    printf("digite o numero do aluno %d\n",i);
    scanf("%d",&aluno[i]);
    printf("digite a altura do aluno %d\n",i);
    scanf("%f",&altura[i]);
    if(altura[i]> maior){
      maior = altura[i];
      a1= aluno[i];
    }
    if(altura[i]< menor){
        menor = altura[i];
        a2= aluno[i];
    }
    } 
printf("O aluno %d eh o mais alto, altura: %f\n",a1,maior);
printf("O aluno %d eh o mais baixo, altura: %f\n",a2,menor);
return 0;
}