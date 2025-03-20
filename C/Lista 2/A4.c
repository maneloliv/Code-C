#include <stdio.h>
int main(){
    int i,j , mat[4][4], cont=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor da posição (%d,%d)",i,j);
            scanf("%d", &mat[i][j]);
            if(mat[i][j]>10){
                cont++;
            }
        }
    }
printf("%d", cont);
return 0;
}       