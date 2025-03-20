#include <stdio.h>
int main(){
    char l1,l2;
    int gol1,gol2;

    printf("Digite a Letra do time 1: ");
    scanf("%c", &l1);
    printf("Digite o numero de gols ");
    scanf("%d", &gol1);
    fflush(stdin);
    printf("Digite a Letra do time 2: ");
    scanf("%c", &l2);
    printf("Digite o numero de gols ");
    scanf("%d", &gol2);
    if(gol1==gol2){
        printf("Empate");
    }else{
        if(gol1>gol2){ 
        printf("O time vencedor foi: %c", l1);
        }else{
            printf("O time vencedor foi: %c", l2);
        }
    }
    return 0;
}