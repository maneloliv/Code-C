#include <stdio.h>
int main(){
    int num, i, soma=0;

    printf("Digite o numero: ");
    scanf("%d", &num);
    for(i=0; i<=num; i++){
        soma= soma + i;
    }
    printf("A soma e: %d", soma);
    return 0;
}