#include <stdio.h>
int main(){
    int num1,num2,num3;

    printf("Digite o Primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o Segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o Terceiro numero: ");
    scanf("%d", &num3);
    if(num1>num2){
        if(num1>num3){
            printf("%d", num1);
        }else{
            printf("%d", num3);
        }
    }else{
        if(num2>num3){
            printf("%d", num2);
        }else{
            printf("%d", num3);
        } 
    }
    return 0;
}   