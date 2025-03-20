#include <stdio.h>
int main()
{
    int mat[3][3],lin[3]={0,0,0},col[3]={0,0,0};
    int i, j;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("digite um numero inteiro(%d , %d)\n", i,j);
        scanf("%d",&mat[i][j]);
    
    }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            lin[i] = lin[i] + mat[i][j];
        }    
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            col[i] = col[i] + mat[i][j];
        }    
    }
    for(i=0;i<3;i++){
        printf("soma da linha %d : %d ", i, lin[i]);
        printf("soma da coluna %d: %d ", i, col[i]);
        printf("\n");
    }
return 0;
}
