#include <stdio.h>
int main(){
    int num;

    printf("Digite o numero: ");
    scanf("%d", &num);

    if(num<=1){ 
        printf("f(x)= 1");
    }else{
        if(num<1 && num<=2){
            printf("f(x)= 2");
        }else{
            if(num<2&&num<=5){
                num= num*num;
                printf("f(x)= %d", num);
            }else{
                if(num>5){
                    num= (num*num)*num;
                    printf("f(x)= %d", num);
                }
            }
        }
    }
    return 0;
}