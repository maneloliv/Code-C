#include <stdio.h>
int main(){
    int trab, caixa;
    float pag;

    printf("Digite o numero do Trabalhador: ");
    scanf("%d", &trab);
     printf("Caixas colhidas do Trabalhador: ");
    scanf("%d", &caixa);

    if(caixa<=5){
        pag= caixa * 2.00;
    }else{
        if(caixa>=6 || caixa<=10){
        pag= caixa * 2.50;
        }else{
            if(caixa>=11 || caixa<=20){
            pag= caixa * 3.50;
            }else{
                if(caixa>=20){
                pag= caixa * 5.00;
                }
            }
        }
    }
    printf("O salario do Trabalhador %d sera de: R$%0.2f", trab, pag);
    return 0;
}