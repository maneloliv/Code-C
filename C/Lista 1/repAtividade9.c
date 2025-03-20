#include <stdio.h>
int main(){
int idade, i=1,cont=0;
float altura;
do{
    printf("Informe a idade da pessoa %d: ",i);
    scanf("%d",&idade);
    printf("Informe a altura da pessoa %d: ",i);
    scanf("%f",&altura);
    i++;
        if(idade>18 && altura>1.60){
            cont++;
        }
} while (idade > 0);
    printf("%d",cont);  
    return 0;
}