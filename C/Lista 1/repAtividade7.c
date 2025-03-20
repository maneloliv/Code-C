#include <stdio.h>
int main(){
    int n,i;
    float s=0,t1=1;

    printf("Digite um Numero: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        t1=i*i;
        s=-1*s+(i/t1);
        printf(" %0.2f ", s);
    }
    return 0;
}