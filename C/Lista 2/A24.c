#include <stdio.h>

void col(int n) {
    int i,j;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(i==j){
                printf("X");
            }else{
            printf("+");
            }
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite a quantidade de colunas ");
    scanf("%d", &n);
    col(n);

    return 0;
}
