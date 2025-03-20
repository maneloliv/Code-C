#include<stdio.h>
int soma(int i, int n, int *vet) {
    int sinal = -1;
    if (i == n) {
        return 0;
    } else {
        return sinal * vet[i] + soma(i + 1, n, vet);
    }
}
int main(){
    int vet[5]={7,4,3,1,6};
    int n;
    scanf("%d", &n);
    printf("%d",soma(0,n,vet));
    return 0;
}