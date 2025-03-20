#include <stdio.h>
int main(){
    int i, vet[30];

    printf("Digite 30 valores inteiros\n");
    for(i=0;i<30;i++){
        scanf("%d",&vet[i]);
    }
    printf("Valores na ordem inversa:\n");
    for(i=29;i>=0;i--){
        printf("%d",vet[i]);

    }
return 0;
}