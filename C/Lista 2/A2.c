#include <stdio.h>
int main()
{
    int i, vetA[40], vetB[40], vetC[40];
    printf("digite 40 numeros inteiros\n");
    for(i=0;i<40;i++){
        scanf("%d",&vetA[i]);
    }
    printf("digite mais 40 numeros inteiros\n");
    for(i=0;i<40;i++){
        scanf("%d",&vetB[i]);
    }
    for(i=0;i<40;i++){
        vetC[i]= vetA[i] - vetB[i];
    }
    for(i=0;i<40;i++){
        printf("%d ", vetC[i]);
    }
    return 0;
}