#include<stdio.h>
int fibo(int n){

    if(n<=1){
        return 1;
    }else{
        return(fibo(n-1)+fibo(n-2));
    }
}
int main(){
    int n;
    printf("Digite ate qual posicao: ");
    scanf("%d",&n);
    
    printf("%d", fibo(n));
return 0;
}