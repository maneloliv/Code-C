#include <stdio.h>
int main(){
    int n,i;
    float s=1,t=1.0,r=0;

    printf("Digite um Numero: ");
    scanf("%d", &n);
    n=n*n;
    for(i=2; i<=n; i+=2){
        r=t/i;
        s=s+r;
    }
    printf("\nA soma: %0.2f", s);
    return 0;
}