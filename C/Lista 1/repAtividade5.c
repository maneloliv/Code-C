#include <stdio.h>
int main(){
    int num,i,j=1;
    printf("Digite um Numero: ");
    scanf("%d", &num);

    for(i=1; i<=num;i++){
        j=j*i;
        printf("x %d ", i);
    }
    printf("\n%d!= %d", num, j);
    return 0;
}