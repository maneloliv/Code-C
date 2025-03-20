#include <stdio.h>
int main(){
    float salb, pres, sal;

    printf("Digite o Valor do Salario: ");
    scanf("%f", &salb);
    printf("Digite o Valor da Prestação: ");
    scanf("%f", &pres);
    sal= salb * 0.3;
    if(pres<=sal){
        printf("O emprestimo pode ser concedido!");
    }else{
        printf("O emprestimo nao pode ser concedido!");
    }
    return 0;
}   