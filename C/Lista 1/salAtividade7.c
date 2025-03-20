#include <stdio.h>
int main(){
    float prod;

    printf("Digite o Valor do Produto: ");
    scanf("%f", &prod);
    if(prod<20.00){
        prod= prod * 0.30;
        printf("O Valor da venda: R$%0.2f",prod);
    }else{
        prod= prod * 0.45;
        printf("O Valor da venda: R$%0.2f",prod);
    }
    return 0;
}   