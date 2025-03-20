#include <stdio.h>
int main(){
    int num, i=0, s=0, t=0;

    printf("Digite o numero: ");
    scanf("%d", &num);
    printf("For: ");
    for(i=0; i<=num; i++){
        printf("%d ",i);
    }
    printf("\nWhile: ");
    while(s<num){
        s++;
        printf("%d ",s);
    }
    printf("\nDo While: ");
    do{
        t++;
        printf("%d ",t); 
    }while(t<num);
    return 0;
}