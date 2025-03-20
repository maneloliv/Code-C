#include <stdio.h>

int funcao (int a, int b, int c){
    int r;
    r= (b*b)-(4*a*c);
    return (r);
    }
int main(){
    int a, b, c;

    printf("Digite os coeficientes (A, B , C): ");
    scanf("%d %d %d", &a, &b, &c);
    printf("o DELTA e: %d", funcao(a, b, c));
    return 0;
}