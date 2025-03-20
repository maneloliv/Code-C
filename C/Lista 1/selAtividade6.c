#include <stdio.h>
int main(){
    int lado1,lado2,base;

    printf("Digite o Primeiro lado: ");
    scanf("%d", &lado1);
    printf("Digite o Segundo lado: ");
    scanf("%d", &lado2);
    printf("Digite a Base: ");
    scanf("%d", &base);
    if(lado1==lado2 && lado2==base){
        printf("Equilatero: todos os lados iguais");
    }else{
        if(lado1==lado2 || lado1==base || lado2==base){
            printf("Isosceles: dois lados de tamanhos iguais.");
        }else{
            printf("Escaleno: tres lados com medidas diferentes");
        }
    }
    return 0;
}   