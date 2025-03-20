#include<stdio.h>
int soma(int n, int i){
    if (n==0){
        return i;
    }else{
       return (i+soma(n-1, i+1));
    }
}


int main(){
    int n, i;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("A some e: %d", soma(n, 0));
   return 0; 
}