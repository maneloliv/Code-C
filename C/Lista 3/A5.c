#include<stdio.h>
int mult(int n, int m){
    if(m<1){
        return 0;
    }else{
        return(n+mult(n,m-1));     
    }   
}


int main (){
    int n, m;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("Digite um multiplicador: ");
    scanf("%d",&m);
    printf("A multiplicacao e: %d",mult(n,m));
    return 0;
}